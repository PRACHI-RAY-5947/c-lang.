#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter array's row size :");
    scanf("%d", &r);
    printf("Enter array's column size :");
    scanf("%d", &c);

    printf("\nEnter array elements :\n");

    int i, a[r][c], sum = 0, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            sum = sum + a[i][j];
        }
    }
    printf("Average of an Array :%d", sum / (r * c));
}
