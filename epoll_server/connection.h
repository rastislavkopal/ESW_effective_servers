#ifndef CONNECTION_H
#define CONNECTION_H


#include "epollfd.h"
#include <sys/socket.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sstream>


class EpollConnection: public EpollFd {
public:
    EpollConnection(int cfd, EpollInstance &e);
    ~EpollConnection();
    void handleEvent(uint32_t events);
private:
    long read_size(int fd);
};

#endif