#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>//for O_RDONLY and O_WRONLY

int main()
{
        int fd;
        char * myfile = "/tmp/myfile";

        mkfifo(myfile,0666);
        char read_str[50],write_str[50];
        while(1)
        {
		fd=open(myfile,O_WRONLY);
                fgets(write_str,50,stdin);
                write(fd, write_str, strlen(write_str)+1);
                close(fd);

                fd=open(myfile,O_RDONLY);
                read(fd, read_str, 50);
		printf("user ID %d : %s\n",getpid(),read_str);
//		printf("USER DATA : %s\n",read_str);
                close(fd);
        }
        return 0;
}

