#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("Enter a value:");
	scanf("%d",&n);

	if(n==0)
	{
		printf("This is neutral no.");
	}
	else if(n>0)
	{
		printf("This is positive no.");
	}
	else
	{
		printf("This is not negative no.");
	}
	getch();
}
