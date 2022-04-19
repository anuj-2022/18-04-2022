#include<stdio.h>
#include<string.h>

void my_mem(char *s,char *d,int a)
{
int i=0;
for(i=0;i<(a);i++)
*d++=*s++;
}



void main()
{
char sor[30]="HI I AM ANUJ KUMAR",des[30];
int i,j=0;
printf("Enter the data\n");
j=strlen(sor);
my_mem(sor,des,j);
for(i=0;i<j;i++)
printf("%c",des[i]);
}

