#include<stdio.h>

main()
{
	char n[20];
	int i,j;
	
	printf("enter string:");
	scanf("%s",&n);
	
	for( i=0; n[i]!=NULL; i++)
	{
		int a=1;
		for( j=i+1; n[j]!=NULL; j++)
		{
			if(n[i]==n[j])
			{
				a++;
			}
		}
		printf ("%c: %d\n",n[i],a);
	}
	
}
