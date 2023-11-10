#include<stdio.h>
#include<conio.h>

main()
{

	int n;
	clrscr();
	printf("Enter any no.:");
	scanf("%d",&n);

	(n/2)?printf("this is even no."):("this is odd no.");
	getch();
}
