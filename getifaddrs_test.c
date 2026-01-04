#define _GNU_SOURCE
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>
#include<ifaddres.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/if_link.h>


int main(int argc, char const *argv[])
{
    struct ifaddrs *ifaddr;
    int family, s;
    char host [NI_MAXHOST];

    if (getifaddrs(&ifaddr) == -1){
        perror("getifaddrs");
        exit(EXIT_FAILURE);
    }

    for(struct ifaddrs *ifa = ifaddr; ifa!=NULL ;ifa = ifa->ifa_next){
        if(ifa->ifa_addr == NULL)
            continue;
        
            family = ifa->ifa_addr->sa_family;

            print("%-8s %s (%d)\n",
            ifa->ifa_name,
            (family == AF_PACKET) ? "AF_PACKET" :
            (family == AF_INET) ? "AF_INET" :
            (family == AF_INET6) ? "AF_INET6" : "???", 
            family);
    }
freeifaddrs(ifaddr);
exit(EXIT_SUCCESS);
return 0;
}
