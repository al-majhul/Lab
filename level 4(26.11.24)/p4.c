#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    while (num>=2)
    {
        printf("%d -> ",num);
        num--;
    }
    printf("1.");
    
return 0;
}