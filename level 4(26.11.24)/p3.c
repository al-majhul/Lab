#include <stdio.h>

int main(){
    int num,i=2;   
    scanf("%d",&num);
    printf("1 ");
    while(1){
        printf("-> %d ",i);
        i*=2;
        if (i>num)
        {
            break;
        }
        
    }
        

    
    
return 0;
}