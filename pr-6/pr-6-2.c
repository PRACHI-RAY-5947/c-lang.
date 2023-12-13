#include<stdio.h>

main()
{
	char n[20];
	int i,j;
	
	printf("enter name:");
	scanf("%s",n);
	
	int len=0,pal=0,n1;
	
	for( i=len;n[i]!=NULL;i++)
	{
		len++;
	}
	for( i=len;n[i]!=NULL;i--)
	{
		n1[n++]=n[i];
	}
	
	for( i=len;n[i]!=NULL;;i++)
	{
		if(n1[n++]=n[i])
		{
			pal++;
		}
	}
	if(pal==ln)
	{
		printf("this is palindrome");
	}
	
	else{
		printf("this is not palindrome");
	}
}
