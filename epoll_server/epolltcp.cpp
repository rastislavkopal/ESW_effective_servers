#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include "epolltcp.h"

#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <fcntl.h>

EpollTcp::EpollTcp(EpollInstance &e) : EpollFd(STDIN_FILENO, e), epollInstance(e)
{
    this->fd = socket(AF_INET, SOCK_STREAM, 0);

    short int port = 8080;
    struct sockaddr_in saddr;

    memset(&saddr, 0, sizeof(saddr));
    saddr.sin_family      = AF_INET;              // IPv4
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);    // Bind to all available interfaces
    saddr.sin_port        = htons(port);          // Requested port

    bind(this->fd, (struct sockaddr *) &saddr, sizeof(saddr));

    int flags = fcntl(this->fd, F_GETFL, 0);
    flags |= O_NONBLOCK;
    fcntl(this->fd, F_SETFL, flags);

    listen(this->fd, SOMAXCONN);

    registerFd(EPOLLIN);
}

EpollTcp::~EpollTcp()
{
    unregisterFd();
}

void EpollTcp::handleEvent(uint32_t events)
{
    if ((events & EPOLLERR) || (events & EPOLLHUP) || !(events & EPOLLIN)) {
        unregisterFd();
    } else {
        int cfd = accept(this->fd, NULL, NULL);
        if (cfd > 0) {
            new EpollConnection((uint32_t) cfd, this->epollInstance);
        } 
    }
}