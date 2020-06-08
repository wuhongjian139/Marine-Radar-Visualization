#ifndef DATATRANSIMISSION_H
#define DATATRANSIMISSION_H

#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <string>

class datatransimission {
 public:
  explicit datatransimission(const std::string &_port);
  virtual ~datatransimission() = default;

  void selectserver(char *recv_buffer, const char *send_buffer, int recv_size,
                    int send_size);

  int getsocketresults() const noexcept { return results; }
  int getconnectioncount();

 private:
  fd_set master;    // master file descriptor list
  fd_set read_fds;  // temp file descriptor list for select()
  int fdmax;        // maximum file descriptor number
  int listener;     // listening socket descriptor

  struct sockaddr_storage remoteaddr;  // client address

  char remoteIP[INET6_ADDRSTRLEN];

  std::string port;  // port we're listening on
  int results;
  // get sockaddr, IPv4 or IPv6:
  void *get_in_addr(struct sockaddr *sa) {
    if (sa->sa_family == AF_INET) {
      return &(((struct sockaddr_in *)sa)->sin_addr);
    }

    return &(((struct sockaddr_in6 *)sa)->sin6_addr);
  }

  void initializesocket();
};

#endif  // DATATRANSIMISSION_H
