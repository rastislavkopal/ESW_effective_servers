#include <iostream>
#include <sys/epoll.h>
#include <sys/timerfd.h>
#include <unistd.h>
#include "epollinstance.h"
#include "epolltcp.h"

using namespace std;

int main(int argc, char *argv[])
{
    EpollInstance ep;
    std::cout << "server started \n";
    EpollTcp server(ep);

    while (1) {
        ep.waitAndHandleEvents();
    }

    return 0;
}
