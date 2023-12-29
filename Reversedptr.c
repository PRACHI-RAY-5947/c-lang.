#include<stdio.h>

void main()
{
    int *arr,*start,*end,temp,n;
    
    printf("Enter array's size:");
    scanf("%d",&n);
    
    arr= (int *)malloc (n* sizeof(int));
    
    printf("\nEnter array's element\n");
    
    for(int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    
    start = arr;
    end = arr + n - 1;
    
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    
    printf("Reversed array element");
    for(int i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        if(i < n-1){
            printf(", ");
        }
    }
    
    free(arr);
    
    
}
    