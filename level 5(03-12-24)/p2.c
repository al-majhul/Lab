#include <stdio.h>
#include <limits.h>
int main(){
    int num,min=INT_MAX,iteraton;

    scanf("%d",&iteraton);
    for (int i = 0; i < iteraton; i++)
    {
        scanf("%d",&num);
        if (num<min)
        {
            min =num;
        }
        
    }
    
    printf("Minimum: %d",min);

return 0;
}