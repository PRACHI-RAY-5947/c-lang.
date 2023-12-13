#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter row size :");
    scanf("%d",&r);
    printf("Enter column size :");
    scanf("%d",&c);

    int a[r][c],i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            (i==j)
               ?printf("%d ",a[i][j])
               :printf("  ");
        }
        printf("\n");
    }
    
    
    }
}
