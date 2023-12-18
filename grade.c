#include<stdio.h>

float getGrade()
{
	int e,s,n,g,h,m,sum=0,total=0,per=0;
	
	printf("\n------enter marks-------\n");	
	
	printf("English:");
	scanf("%d",&e);
	printf("Maths:");
	scanf("%d",&m);
	printf("Science:");
	scanf("%d",&s);
	printf("S.S:");
	scanf("%d",&n);
	printf("Gujarati:");
	scanf("%d",&g);
	printf("Hindi:");
	scanf("%d",&h);
	printf("Sanskrit:");
	scanf("%d",&m);
	
	
	total=e+m+s+n+g+h+m;
	
	per=(total/700)*100;
		
	printf("total marks:%d",total);
	
	printf("percentage:%d",per);
	
	
	if(per<=95 && per>=85)
	{
		printf("A grade");
	}
	else if(per<85 && per>=75)
	{
		printf("B grade");
	}
	else if(per<75 && per>=65)
	{
		printf("C grade");
	}
	else if(per<65 && per>=55)
	{
		printf("D grade");
	}
	
}

