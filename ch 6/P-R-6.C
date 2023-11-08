#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("1st value:");
	scanf("%d",&a);
	printf("2nd value:");
	scanf("%d",&b);

	if(a<b)
	{
		printf("1st value is minimum value");
	}
	else
	{
		printf("2nd value is minimum value");
	}

	getch();
}