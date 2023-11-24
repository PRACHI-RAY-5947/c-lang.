#include<stdio.h>
#include<conio.h>

main()
{
	int n,digit=0;
	clrscr();

	printf("enter any no.:");
	scanf("%d",&n);

	while(n!=0)
	{
		n=n/10;
		digit++;
	}
	printf(" total no. of digit: %d",digit);

	getch();
}