#include <stdio.h>

void binary_print(unsigned int n)
{
	unsigned int mask = 0x80000000;
    while(mask) {
	  printf("%d", (n&mask)?1:0);
	  mask = mask >> 1;
	}
}

void main()
{
    unsigned int num = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary represntation of the input number:\n");
    binary_print(num);
    
    num = ~num;
    
    printf("\n\nAfter toggling all bits of the number:\n");
    binary_print(num);
    
}
