#include<stdio.h>

main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int i,a[n],b[n],c[n];
	
	
	printf("\nArray a:");
	
	for(i=0; i<n ;i++)
	{
		printf("a[%d]",a[i]);
		scanf("%d",&a[i])
	}
	
	
	printf("Array b:");
	for(i=0; i<n ;i++)
	{
		printf("b[%d]",b[i]);
		scanf("%d",&b[i])
	}
	
	printf("Array b:");
	
	for(i=0; i<n+n ;i++)
	{
		printf("c[%d]",c[i]);
		
	}
	
}
