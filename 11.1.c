#include<stdio.h>

main()
{
	int size;
	
	printf("Enter array's size:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("\nEnter array's element\n");
	
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nSquare of element\n");
	
	for(int i=0;i<size;i++)
	{
		printf("%d",*(arr+i)**(arr+i));
		if(i!=size-1)
		{
			p(" ");
		}
	}
	printf("\n");
	return 0;
}
