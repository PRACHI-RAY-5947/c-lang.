#include<stdio.h>
//#include<string.h>

main()
{
	char eml[10];
	
	int len,i;
	
	int lwr=0,digit=0,specialsymbol=0;
	
	printf("enter email id:");
	scanf("%s",eml);
	
	for(i=0;eml[i] !='\0';i++)
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		if( lwr==1 && digit==0 && specialsymbol==1)
		{
			len++;
		}
	}
	for(i=0;i<len;i++)
	{
		
		
		 if(eml[i]>=97 && eml[i]<=122)
		{
			lwr ==1;
		}
		
		else if(eml[i]=48 && eml[i]<=57)
		{
			digit ==1;
		}
		
		else if(eml[i]==@)
		{
			specialsymbol ==1;
		}
		
		else if(eml[i]==gmail.com)
		{
			eml==gmail.com;
		}
	}
	
	if(len>6)
	{
		puts("-----valid email id------");
	}
	
	else
	{
		puts("------not valid email id--------");
	}
}

