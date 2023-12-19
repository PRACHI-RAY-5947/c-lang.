#include<stdio.h>
#include"F:\5947-PRACHI-RAY\array_fun.c"

void main()
{
	int n;
	printf("Enter length:");
	n=getint();
	
	int a[n];
	
	arrayinput(a,n);
	arrayoutput(a,n);
}
