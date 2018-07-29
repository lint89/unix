/* include unph */

#ifndef __unp_h__
#define __unp_h__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define LISTENQ     1024

#define MAXLINE     4096
#define BUFFSIZE    8192 

#define SA struct sockaddr

ssize_t Read(int fd, void *ptr, ssize_t nbytes);
void Write(int fd, void *ptr, ssize_t nbytes);
void Close(int fd);


int Socket(int family, int type, int protocol);
void Bind(int fd, const struct sockaddr *sa, socklen_t salen);
void Listen(int fd, int backlog);
int Accept(int fd, struct sockaddr *sa, socklen_t *salenptr);


void err_dump(const char *, ...);
void err_msg(const char *, ...);
void err_quit(const char *, ...);
void err_ret(const char *, ...);
void err_sys(const char *, ...);

#endif /* __unp_h__ */
