#include<stdio.h>

void main()
{
    int size,i;
    
    printf("Enter the size of array:");
    scanf("%d",&size);
    
    int arr[size];
    
    printf("\nEnter array's element\n");
    
    for(i=0;i<size;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    
    printf("\nSquare of each element\n");
    printf("%d = ",*(arr + i)* *(arr + i));
    
    if(i != size -1)
    {
        printf(", ");
    }
    printf("\n");

}    