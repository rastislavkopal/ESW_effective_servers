#include "connection.h"

#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <memory>

#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <fcntl.h>

#include "schema.pb.h"
#include "zlib.h"
#include <tbb/concurrent_unordered_set.h>
#include <sstream>
#include <boost/algorithm/string.hpp>
// #include <boost/asio/thread_pool.hpp>
// #include <boost/asio/post.hpp>
#include <set>
#include <thread>

static boost::asio::thread_pool thread_pool(std::thread::hardware_concurrency());
static tbb::concurrent_unordered_set<std::string> words;

EpollConnection::EpollConnection(int port, EpollInstance &e) : EpollFd(port, e) {
    registerFd(EPOLLIN);
}

EpollConnection::~EpollConnection() noexcept {
    unregisterFd();
    close(this->fd);
}

// converts 4byte array to uint
int bufferToInt(char * buf) {
    return int((unsigned char)(buf[0]) << 24 | (unsigned char)(buf[1]) << 16 | (unsigned char)(buf[2]) << 8 | (unsigned char)(buf[3]));
}

// converts uint to 4byte array
void longToByteArr(char *arr, size_t size) {
    arr[0] = (char)((size >> 24) & 0xFF);
    arr[1] = (char)((size >> 16) & 0xFF);
    arr[2] = (char)((size >> 8) & 0xFF);
    arr[3] = (char)(size & 0xFF);
}

Request stringToRequest(const char * data, int size) {
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	Request req;

	if (!req.ParseFromArray(data, size)) {
		std::cerr << "Failed to parse request" << std::endl;
	}
	return req;
}

// taken from docs https://gist.github.com/gomons/9d446024fbb7ccb6536ab984e29e154a
/** Decompress an STL string using zlib and return the original data. */
inline std::string decompress_string(const std::string &data) {
    z_stream zs;                        // z_stream is zlib's control structure
    memset(&zs, 0, sizeof(zs));

    if (inflateInit2(&zs, 15 + 16) != Z_OK)
        throw(std::runtime_error("inflateInit failed while decompressing."));

    zs.next_in = (Bytef*)data.data();
    zs.avail_in = data.size();

    int ret;
    char outbuffer[32768];
    std::string outstring;

    // get the decompressed bytes blockwise using repeated calls to inflate
    do {
        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
        zs.avail_out = sizeof(outbuffer);

        ret = inflate(&zs, 0);

        if (outstring.size() < zs.total_out) {
            outstring.append(outbuffer,
                             zs.total_out - outstring.size());
        }

    } while (ret == Z_OK);

    inflateEnd(&zs);

    if (ret != Z_STREAM_END) {          // an error occurred that was not EOF
        std::ostringstream oss;
        oss << "Exception during zlib decompression: (" << ret << ") "
            << zs.msg;
        throw(std::runtime_error(oss.str()));
    }

    return outstring;
}

void EpollConnection::handleEvent(uint32_t events) {
    if ((events & EPOLLERR) || (events & EPOLLHUP) || !(events & EPOLLIN)) {
        delete this;
    }else{

        char bSize[4];
        size_t rcvd = read(this->fd, bSize, 4);
        if (rcvd == 0 || rcvd == -1) {
            delete this;
            return;
        }

        int size = bufferToInt(bSize);

        if (size <= 0) {
            // client disconnected
            delete this;
            return;
	    }

        char * buffer = new char[size];

        uint32_t bytes_read = 0;
        bool streaming_err = false;

        while (bytes_read < size) {
            int32_t recvd_bytes = recv(this->fd, &buffer[bytes_read], size - bytes_read, 0);

            if(recvd_bytes != -1) {
                bytes_read += recvd_bytes;
            } else {
                streaming_err = true;
                break;
            }
        }

        Request req = stringToRequest(buffer, size);
        delete[] buffer;

        // boost::asio::post(thread_pool,
        //         [this, req, size]() {
                    Response res;
                    if (req.has_getcount()) {
						res.set_counter(words.size());
						res.set_status(Response::OK);
						words.clear();
                    } else if (req.has_postwords()) {
						res.set_status(Response::OK);
                        auto decompressedData = decompress_string(req.postwords().data());

                        std::set<std::string> perMessageWords;

                        boost::trim(decompressedData);

                        boost::split(perMessageWords, decompressedData, [](char c) { return isspace(c); }, boost::token_compress_on);

                        for (const auto & word : perMessageWords) {
                            words.insert(word);
                        }
                    } else {
						throw std::runtime_error("Broken request");
					}

                    size_t size = res.ByteSizeLong();
					char bSize[4];
					longToByteArr(bSize, size);
					write(this->fd, bSize, 4);

					char * message = new char[size];
					res.SerializeToArray(message, size);
					write(this->fd, message, size);
					
					delete[] message;
                // });

    }
}