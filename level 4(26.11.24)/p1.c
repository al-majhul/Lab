#include <stdio.h>
int main(){
    int num;
    printf("How many '$' : ");
    scanf("%d",&num);
    for (int i = 0; i < num-1; i++)
    {
        printf("$ - ");
    }
    printf("$.");
    
return 0;
}