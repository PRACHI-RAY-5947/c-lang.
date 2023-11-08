#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);

	if(a<b<c)
	{
		if(a<b)
		{
			printf("a is minimum");
		}

		else
		{
			printf("b is minimum");
		}
	}

	else
	{
		if(b<c)
		{
			printf("b is minimum");
		}

		else
		{
			printf("c is minimum");
		}
	}

	getch();
}