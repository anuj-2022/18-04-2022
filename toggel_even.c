#include <stdio.h>

int main()
{
    int num, n=31, newNum;
    int i;
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

   for(i=0;i<=n;i=i+2)
   {
    newNum = num ^ (1 << i);

    printf("Number before toggling %d bit: %d (in decimal)\n", i, num);
    printf("Number after toggling %d bit: %d (in decimal)\n", i, newNum);
    printf("\n");
    }

    return 0;
}
