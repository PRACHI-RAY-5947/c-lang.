#include<stdio.h>
#include<conio.h>

main()
{
	int f,c;
	clrscr();

	printf("the tempreture in celcuse : ");
	scanf("%d",&c);
	f=(c*1.8)+32;
	printf("the tempreture in fahrenheit : %d",f);
	getch();

}
