#include <stdio.h>
int main()
{
    int x1, x2, sum=0;
    scanf("%d %d",&x1,&x2);
        for (int i = x1; i < x2; i++)
        {
            if (i % 3 == 0)
            {
                sum = sum + i;
            }
        }
    printf("Sum = %d", sum);

    return 0;
}