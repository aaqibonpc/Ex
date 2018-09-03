#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(){
    int fd;
    fd=open("test.txt",O_WRONLY | O_CREAT,777);
    write(fd,"hello");
    close(fd);
}