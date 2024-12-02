#include <stdio.h>
int main(){
    int num;   
    scanf("%d",&num);
    int i;
    for (i = 1; i < num-3; i+=3)
    {
        printf("%d -> ",i);
    }
    if (i<=num)
    {
        printf("%d.",i);
    }
    
    
return 0;
}