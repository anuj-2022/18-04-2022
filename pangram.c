// Pangram is the sequence of all alphabet appears atlist one in the given string

#include<stdio.h>

void main()
{
	char str[50];
	int i,flag=0;
	int count[26]={0};
	printf("Enter the data\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==32)
		continue;
	
		if(str[i]>96)
			count[str[i]-97] +=1;
		else
		count[str[i]-65] +=1;
	}

	for(i=0;i<26;i++)
		if(count[i]==0)
		flag=1;
//		printf("Not pangram\n");
//		printf("count no is %d\n",count[i]);

	if(flag==0)
	printf("pangram\n");
	else
	printf("Not pangram\n");
}
