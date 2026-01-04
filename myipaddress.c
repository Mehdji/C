#include <stdio.h>
#include <stdlib.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <string.h>

int main(void) {
  //Declare a pointer to a struct ifaddrs named ifaddr
  struct ifaddrs *ifaddr;

  //Pass the pointer as argument on getifaddrs() and test return value
  if (getifaddrs(&ifaddr) == -1) {
    perror("getifaddrs");
    return 1;
  }

  for (struct ifaddrs *ifa = ifaddr; ifa; ifa = ifa->ifa_next) {
    if (!ifa->ifa_addr) continue;

    if (ifa->ifa_addr->sa_family == AF_INET) { // IPv4
      char ip[INET_ADDRSTRLEN];
      struct sockaddr_in *sa = (struct sockaddr_in*)ifa->ifa_addr;

      if (inet_ntop(AF_INET, &sa->sin_addr, ip, sizeof ip)) {
        // évite loopback
        if (strcmp(ifa->ifa_name, "lo") != 0) {
          printf("%s -> %s\n", ifa->ifa_name, ip);
        }
      }
    }
  }

  freeifaddrs(ifaddr);
  return 0;
}