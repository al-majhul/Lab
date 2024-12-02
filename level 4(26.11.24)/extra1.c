#include <stdio.h>
int main(){
    int fibb1 = 1, fibb2=2 ,n;
    scanf("%d",&n);
    printf("1 1 2 ");
    for (int i = 3; i < n; i++)
    {
        fibb2 = fibb1 + fibb2;
        printf("%d ",fibb2);
        fibb1 = fibb2 -fibb1;
    }
    
return 0;
}