#include<stdio.h>

void swap(int a , int b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int x,y;
    
    printf("Enter value of x:");
    scanf("%d",&x);
    
    printf("Enter value of y:");
    scanf("%d",&y);
    
    printf("\nBefore swapping\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    
    swap(&x, &y);
    
    printf("\nAfter swapping\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    
}
    
    
    
    

    