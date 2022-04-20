#include <stdio.h>
int main()
{
  int   arr[] = { 50, 100, 150 };
  int   *arrPtr[3];
  int i;
  for (i = 0; i <= 2; i++) {
    arrPtr[i] = &arr[i]; // assigns address of each element of array, arr to array of pointers, arrPtr []
  }
  for (i = 0; i <= 2; i++){
    printf("Element of the array arr[%d] has value %d and is at address %x \n", i, *arrPtr[i], arrPtr[i]);
  }
  return 0;
}

