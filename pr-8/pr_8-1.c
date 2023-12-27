#include<stdio.h>

 main()
{
	int i,j,n,ptr;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",arr[i]);
	}
	
	for(j=0;j<n;j++)
	{
		printf("a[%d]=",j);
		scanf("%d",arr[j]);
	}
	
	printf("\nCube of array\n");
	
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				printf("%d",([i][j])*([i][j])*([i][j]));
			}
	}
}
