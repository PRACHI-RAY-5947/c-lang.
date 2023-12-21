#include<stdio.h>

int sum(int a,int b)
{
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	return a+b;
}
int sub(int a,int b)
{
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	return a-b;
}
int mul(int a,int b)
{
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	return a*b;
}
int div(int a,int b)
{
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	return a/b;
}
int mod(int a,int b)
{
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	return a%b;
}

void calc()
{
	int a,b,choice;
	
	do
	{
		printf("Press 1 for + \n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		
			printf("Enter your choice:");	
			scanf("%d",&choice);
			
			switch(choice)
			{
				
				case 0:  printf("exit !!\n" );
				break;
				
				case 1:  printf("sum of : %d \n",  sum(a,b));
				break;
				
				case 2:  printf("sub of : %d \n",  sub(a,b));
				break;
				
				case 3:  printf("mul of : %d ",  mul(a,b));
				break;
				
				case 4:  printf("div of : %d \n", div(a,b));
				break;
	
				case 5:  printf("mod of : %d \n", mod(a,b));
				break;
	
			}
	
	}while(choice !=0);
	
}

