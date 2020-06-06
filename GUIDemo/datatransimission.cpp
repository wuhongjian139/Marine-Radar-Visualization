#include "datatransimission.h"


datatransimission::datatransimission(const std::string &_port)
    : fdmax(0), listener(0), port(_port), results(0) {
  initializesocket();
}

void datatransimission::selectserver(char *recv_buffer, const char *send_buffer, int recv_size,
                  int send_size) {
  read_fds = master;  // copy it
  if (select(fdmax + 1, &read_fds, NULL, NULL, NULL) == -1) {
    results = 4;
  }

  // run through the existing connections looking for data to read
  for (int i = 0; i <= fdmax; i++) {
    if (FD_ISSET(i, &read_fds)) {  // we got one!!
      if (i == listener) {         // handle new connections
        // newly accept()ed socket descriptor
        socklen_t addrlen = sizeof remoteaddr;
        int newfd =
            accept(listener, (struct sockaddr *)&remoteaddr, &addrlen);

        if (newfd != -1) {
          FD_SET(newfd, &master);  // add to master set
          if (newfd > fdmax) {     // keep track of the max
            fdmax = newfd;
          }
        }
      } else {
        // handle data from a client
        int recv_bytes = recv(i, recv_buffer, recv_size, 0);
        if (recv_bytes <= 0) {
          // got error or connection closed by client
          close(i);            // bye!
          FD_CLR(i, &master);  // remove from master set
        } else {
          // we got some data from a client
          int send_bytes = send(i, send_buffer, send_size, 0);
        }

      }  // END handle data from client
    }    // END got new incoming connection
  }      // END looping through file descriptors
}        // selectserver()


int datatransimission::getconnectioncount()  {
  int clientcount = 0;  // # of clients connected
  for (int i = 0; i <= fdmax; i++) {
    if (FD_ISSET(i, &master)) ++clientcount;
  }
  return clientcount - 1;  // remove self fd
} // getconnectioncount



void datatransimission::initializesocket() {
  struct addrinfo hints, *ai, *p;

  FD_ZERO(&master);  // clear the master and temp sets
  FD_ZERO(&read_fds);

  // get us a socket and bind it
  memset(&hints, 0, sizeof hints);
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;
  hints.ai_flags = AI_PASSIVE;
  int rv = getaddrinfo(NULL, port.c_str(), &hints, &ai);
  if (rv != 0) {
    // fprintf(stderr, "selectserver: %s\n", gai_strerror(rv));
    results = 1;
  }

  for (p = ai; p != NULL; p = p->ai_next) {
    listener = socket(p->ai_family, p->ai_socktype, p->ai_protocol);
    if (listener < 0) {
      continue;
    }

    // // lose the pesky "address already in use" error message
    // int yes = 1;  // for setsockopt() SO_REUSEADDR, below
    // setsockopt(listener, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int));

    struct timeval tv;
    tv.tv_sec = 1;
    tv.tv_usec = 0;
    setsockopt(listener, SOL_SOCKET, SO_RCVTIMEO, (const char *)&tv,
               sizeof tv);

    if (bind(listener, p->ai_addr, p->ai_addrlen) < 0) {
      close(listener);
      continue;
    }

    break;
  }
  // if we got here, it means we didn't get bound
  if (p == NULL) {
    results = 2;
  }

  freeaddrinfo(ai);  // all done with this

  // listen
  if (listen(listener, 10) == -1) {
    results = 3;
  }

  // add the listener to the master set
  FD_SET(listener, &master);

  // keep track of the biggest file descriptor
  fdmax = listener;  // so far, it's this one
}
