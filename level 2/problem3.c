#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter 4 digit integer number \n");
    scanf("%d",&num);
    for (int i = 0; i < 4; i++)
    {
        int r= num%10;
        sum = sum + r;
        num = num/10;
    }
    printf("%d ",sum);

    
    
return 0;
}