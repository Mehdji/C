#include <stdio.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    WSADATA wsaData;

    struct addrinfo hints;
    struct addrinfo *res;
    struct addrinfo *p;
    struct addrinfo *rp;
    struct sockaddr_in *addr_in;

    // 1. Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        fprintf(stderr, "WSAStartup failed.\n");
        exit(1);
    }

    // 2. Initialize hints
    memset(&hints, 0, sizeof(hints));

    // 3. Configure hints
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = 0;

    // 4. getaddrinfo()

    int status = getaddrinfo("google.com", "80", &hints, &res);

    if (status != 0)
    {
        exit(1);
    }

    // 5. Walk through res

    for (rp = res; rp != NULL; rp = rp->ai_next)
    {
        if (rp->ai_family == AF_INET)
        {
            printf("IPv4: ");
            addr_in = (struct sockaddr_in *)rp->ai_addr;
            printf("%d.%d.%d.%d\n",
                   addr_in->sin_addr.S_un.S_un_b.s_b1, addr_in->sin_addr.S_un.S_un_b.s_b2, addr_in->sin_addr.S_un.S_un_b.s_b3, addr_in->sin_addr.S_un.S_un_b.s_b4);
        }
        else if (rp->ai_family == AF_INET6)
        {
            printf("IPv6\n");
        }
    }

    // 6. freeaddrinfo()
    freeaddrinfo(res);

    // 7. WSACleanup()
    WSACleanup();

    return 0;
}
