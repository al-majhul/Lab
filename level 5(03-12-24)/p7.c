#include <stdio.h>
int main()
{
    int count = 0;
    long long int sum, num = 5;
    while (1)
    {
        sum = 0;

        for (int i = 1; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
        {
            printf("%lld\n", num);
            count++;
        }
        num++;
        if (count == 4)
        {
            break;
        }
    }

    return 0;
}