#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	float n;
	clrscr();
	printf("enter marks of sub. 1:");
	scanf("%d",&a);
	printf("enter marks of sub. 2:");
	scanf("%d",&b);
	printf("enter marks of sub. 3:");
	scanf("%d",&c);

	n=a+b+c;

	printf("percentage of 3 sub. : %.2f",n/3);

	getch();
}