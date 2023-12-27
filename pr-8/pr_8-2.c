#include<stdio.h>

void main()
{
	char n[20];
	char *ptr=n;
	int length=0;
	
	printf("Enter any no.:");
	scanf("%[^\n]",n);
	
	while(*ptr !='\0')
	{
		length++;
		ptr++;
	}
	printf("length of n:%d\n",length);
	
}

