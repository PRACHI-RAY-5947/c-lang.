#include<stdio.h>
#include<conio.h>

main()
{
	char i='a',n='z';
	clrscr();

	do
	{
	 printf("%c \t",i);
	 i+=4;
	}
	while(i<='z');
	getch();
}