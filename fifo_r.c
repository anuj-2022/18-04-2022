#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>//for O_RDONLY and O_WRONLY


int main()
{
        int fd1;
        char * myfile = "/tmp/myfile";

        mkfifo(myfile,0666);
        char read_str1[50],write_str1[50];
        while(1)
        {

                fd1=open(myfile,O_RDONLY);
                read(fd1, read_str1, 50);
                printf("user ID %d : %s\n",getpid(),read_str1);
//		printf("USER DATA : %s\n",read_str1);
                close(fd1);
		
		fd1=open(myfile,O_WRONLY);
                fgets(write_str1,50,stdin);
                write(fd1, write_str1, strlen(write_str1)+1);
                close(fd1);
        }
        return 0;
}

