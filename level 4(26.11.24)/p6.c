#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int i;
    for (i = 1; i < n; i++)
    {
        sum=sum+(i*(i+1));
        printf("%d * %d + ",i,i+1);
    }
    printf("%d * %d = %d",i,i+1,sum+(i*(i+1)));
    
return 0;
}