#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n);
void displayArray(int arr[], int n);



int main()
{

    int data[] = {27, 13, -54, 93, -20};  

  // finding array's length

  int n = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, n);  

  printf("Array after implementing bubble sort: \n");

  displayArray(data, n); 

}

void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; ++i)
    {   

        int Swap = 0;    

        // Comparing array elements

        for (int x = 0; x < n - i - 1; ++x)
        {    

            if (arr[x] > arr[x + 1])
            {

                int temp = arr[x];

                arr[x] = arr[x + 1];

                arr[x + 1] = temp;      

                Swap = 1;

            }

        }    

        if (Swap == 0)
        { // No swapping required

            break;

        }    

    }

}

void displayArray(int arr[], int n)
{    

    for (int x = 0; x < n; ++x)
    {

        printf("%d  ", arr[x]);

    }    

    printf("\n");

}

