#include <stdio.h>
int main(){
    int num;
    long long int sum=1;
    printf("Enter a number: \n");
    scanf("%d",&num);
    for (int i = 1; i<=num; i++)
    {
        sum = sum*i;
    }
    printf("Factorial = %lld",sum);
return 0;
}