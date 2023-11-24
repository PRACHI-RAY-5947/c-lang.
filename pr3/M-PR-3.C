#include<stdio.h>
#include<conio.h>

main()
{
	int  n1,n2,sum;
	clrscr();
	printf("enter first no.:");
	scanf("%d",&n1);
	printf("enter last no.:");
	scanf("%d",&n2);
	sum=n1+n2;
	printf("sum of first & last no.: %d",sum);
	getch();
}