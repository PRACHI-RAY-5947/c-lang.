#include<stdio.h>
main()
{
	int r,c;
	
	printf("Enter row:");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);
	
	int i,j,a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]:",a [i][j]);
			scanf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	int row,col,rsum,csum;
	
	printf("Enter row:");
	scanf("%d",&r);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
			printf("row:%d\n",a[i][j]);	
			}
			
		}
		printf("\n");
	}
	printf("Enter row:");
	scanf("%d",&r);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
				rsum +=a[i][j]);	
			}
			
		}
		printf("\n");
	}
	
	printf("Enter column:");
	scanf("%d",&r);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==col)
			{
			printf("col:%d\n",a[i][j]);	
			}
			
		}
		printf("\n");
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==col)
			{
				csum +=a[i][j]);	
			}
			
		}
		printf("\n");
	}
	
	
