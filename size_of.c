#include<stdio.h>

//#define  own_size(data)               (char *)(&data+1)-(char *)(&data)

void main()
{
char  i;
printf("%d\n",(char *)(&i+1)-(char *)(&i));
}

