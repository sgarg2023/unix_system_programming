#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<error.h>

void main()
{
int fd=0;
fd=open("shubhra.txt",O_RDWR);
if(fd == -1)
{
	printf("\n Open() was failed fd=%d",fd,"\n");
	perror("Erorr\n");
}
else{
printf("\n open() call executed successfully with fd=%d",fd,"\n\n\n");
}

}
