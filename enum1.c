#include<stdio.h>

enum week{mon,tue,wed,thu,fri,sat,sun};

int main()
{
	int i;
	enum week day;
//	day=sun;
	for(day=mon;day<=sun;day++)
	{
	printf("%d\n",day);
	}
	printf("%d\n",day);
	return 0;
}

