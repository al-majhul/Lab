#include <stdio.h>
int main()
{
    int row;
    scanf("%d", &row);

    // ------a------

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (row - i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // -----b-----
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", (i + 1));
        }
        printf("\n");
    }

    // ------c------
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < (row - i); j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}