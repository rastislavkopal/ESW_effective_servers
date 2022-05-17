to run this project:

generate protobuf schemas:
protoc -I=/epoll_server --cpp_out=/epoll_server/src /epoll_server/schema.proto

build project in main dir:
cmake . && make

run server on port 8080:
./server