//wap to show the union shering memory
#include<stdio.h>
int main()
{
	union result
	{
		int marks;
		char grade;
		float percent;
	}stdu;
	printf("Enter ther marks\n");
	scanf("%d",&stdu.marks);
//	stdu.grade='A';
//	stdu.percent=90.00;
	printf("marks is %d\n",stdu.marks);
	 stdu.grade='A';

	printf("grade is %c\n",stdu.grade);
	stdu.percent=90.00;

	printf("percent is %f",stdu.percent);
	return 0;
}

