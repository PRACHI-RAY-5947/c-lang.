#include<stdio.h>

main()
{
	int n;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n],i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("value at a[%d] is %d\n",i,a[i]);
		scanf("%d",&a[i]);
		}
		
		if(a[i]<0)
		{
			printf("negative element:");
		}
		printf("\n");
	}
}
