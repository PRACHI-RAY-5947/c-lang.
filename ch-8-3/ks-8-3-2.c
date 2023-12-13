#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter row size :");
    scanf("%d", &r);
    printf("Enter column size :");
    scanf("%d", &c);

    int a[r][c], b[r][c], j, i;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d  ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}
