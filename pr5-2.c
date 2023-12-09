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
			printf("a[%d][%d]:",a[i][j]);
			scanf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for("j=0;j<c;j++")
		{
			if(a[i][j]>a[i][j])
			printf("largest no:a[i][j]")
		}
		printf("\n");
	}
}
