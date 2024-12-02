#include <stdio.h>
int main(){
    int num;
    printf("Enter number: \n");
    scanf("%d",&num);
    if (num%5==0)
    {
        printf("Divisible\n");
    }else{
        printf("Not divisible\n");
    }
    
return 0;
}