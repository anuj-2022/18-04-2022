#include<stdio.h>
#include<stdlib.h>

    void main()
    {
	 int i,j=0,n;
	 long int sum=0,missing;
	 printf("enter the size of an array : ");
	 scanf("%d",&n);
	 int arr[n];
	 printf("please give value to insert in array: \n");
	 for(j=0;j<n;j++)
	 {
	     if(j==5)
	     arr[j]=0;
	     else
	    arr[j]=j+1;
	 }
	 for(i=0;i<n;i++)
	     sum=sum+arr[i];
	 
	 for(j=0;j<n;j++)
	 printf("%d\t",arr[j]);
	 missing = (n*(n+1))/2 - sum;
	 printf("missing number is = %ld\n", missing);

}
