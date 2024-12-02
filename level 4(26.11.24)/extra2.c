#include <stdio.h>

int main()
{
    int fibb1 = 1, fibb2 = 2, n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 1");
    }
    else if (n == 2)
    {
        printf("1 1 2");
    }
    else
    {
        printf("1 1 2 ");
    for (int i = 3; (fibb2+fibb1) <= n; i++)
    {
        fibb2 = fibb1 + fibb2;
        printf("%d ",fibb2);
        fibb1 = fibb2 -fibb1;
    }
    }
    return 0;
}
