#include<stdio.h>
#include<conio.h>

main()
{
	int j,i,count=0,n;
	clrscr();
	printf("enter no.:");
	scanf("%d",&n);

	for(j=1;j<=n;j++)
	{
		count=0;

		for(i=1;i<=j/2;i++)
		{
			if(i%j==0)
			{
			 count++;
			 break;
			}
		}
		if(count==0 && j!=0)
		printf("\t%d",j);
	}
	getch();
}