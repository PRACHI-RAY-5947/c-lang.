#include<stdio.h>
#include<conio.h>

main()
{
	float a;
	clrscr();
	printf("\nEnter any no.:");
	scanf("%f",&a);

	if(a<=50)
		{
		printf("Your total bill = %.2f",a*0.5);
		}

	else if(a>=50||a<=150)
		{
		printf("Your total bill = %.2f",(50*0.5)+(a*0.5)*0.75);
		}

	else if(a>=150||a<=250)
		{
		printf("Your total bill = %.2f",(a*1.20)+(100*1.20)+(100*0.75));
		}

	else
		{
		printf("Your total bill = %.2f",(50*0.5)+((a-250)*1.5));
		}
	getch();
}