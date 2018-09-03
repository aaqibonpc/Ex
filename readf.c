#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(){
    int a,fd;
    fd=open("my.txt",O_RDONLY);
    a=read(fd,1,4);
    perror("Error : ");
    printf("%d\n",a);
}