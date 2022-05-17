#ifndef EPOLLTCP_H
#define EPOLLTCP_H

#include <sys/epoll.h>
#include "epollfd.h"
#include "epollinstance.h"
#include <vector>
#include "connection.h"

class EpollTcp : public EpollFd
{
private:
    std::vector<EpollConnection> conns;
    EpollInstance &epollInstance;
public:
    EpollTcp(EpollInstance &e);
    ~EpollTcp();
    void handleEvent(uint32_t events);
};

#endif // EPOLLSTDIN_H
