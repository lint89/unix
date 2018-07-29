#include "unp.h"

ssize_t Read(int fd, void *ptr, ssize_t nbytes)
{
    ssize_t n;

    if ( (n = read(fd, ptr, nbytes)) == -1)
        err_sys("read error");

    return(n);
}


void Write(int fd, void *ptr, ssize_t nbytes)
{
    if (write(fd, ptr, nbytes) != nbytes)
        err_sys("write error");
}


void Close(int fd)
{
    if (close(fd) == -1)
        err_sys("close error");
}
