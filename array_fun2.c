#include<stdio.h>

int nsum(int n)
{
	if(n>=1)
	{
		return n+ ssum(n-1);
	}
	else
	{
		return 1;
	}
}

int getarraysum (inta[],int n)
{
	int sum=0,i;
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		return sum;
	}
}

int getarraylength()
{
	int n;
	printf("enter array length:");
	n=getint();
	return n;
}

int getsum(int a, int b)
{
	return a+b;
}
