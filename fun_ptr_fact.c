#include <stdio.h>

long factorial(int n);
int main()
{
  int number,result;
  long (*fact)(int);
  printf("Enter a number: ");
  scanf("%d", &number);

  fact=factorial;
  result=(*fact)(number);
  printf("Factorial of %d is %ld\n", number, result);
  return 0;
}

long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
  
