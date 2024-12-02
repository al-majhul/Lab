#include <stdio.h>
int main(){
    int num,sum=0;
    scanf("%d",&num);
    while (1)
    {
        sum=sum + num%10;
        num=num/10;
        if (num==0)
        {
            break;
        }
        
    }
    printf("%d",sum);
return 0;
}