#include<stdio.h>  

 void print(int arr[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
        printf("%d ",arr[i]);    
    }  
 void bubble(int arr[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(arr[j] < arr[i])    
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
{    
    int i, j;     
    printf("Enter the size of array\n");
    scanf("%d",&i);
    int a[i];
    for(j=0;j<i;j++)
    {
        printf("enter the data %d\n",i);
        scanf("%d",&a[j]);
    }
    printf("Before sorting array elements \n");  
    print(a, i);  
    bubble(a, i);  
    printf("\nAfter sorting array elements \n");    
    print(a, i);  
}    

