#include <stdio.h>
int main(){
    int n,r;
    unsigned long long int res=1;
    scanf("%d %d",&n,&r);
    for (int i = n; i > (n-r); i--)
    {
        res=res*i;
    }
    printf("Result %lld",res);
return 0;
}