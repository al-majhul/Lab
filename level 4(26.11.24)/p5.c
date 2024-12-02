#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    for (int i = 2; i <= num; i += 2)
    {
        sum += i;
    }
    printf("Sum: %d", sum);

    return 0;
}