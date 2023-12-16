#include<stdio.h>

cube()
{
    int n;
    
    printf("enter any no.:");
    scanf("%d",&n);
    
    printf("cube of no.:%d",n*n*n);
    
}

div()
{
    int n;
    
    printf("enter any no.:");
    scanf("%d",&n);
    
    if(n/3==0 && n/5==0)
    {
        printf("this no. is divisible by both 3 & 5");
    }
    else
    {
        printf("this no. is not divisible by 3 & 5");
    }
    
}

main()
{
    div();
}