#include <stdio.h>
int main(){
    printf("Enter 2 number: \n");
    int a,b;
    scanf("%d %d",&a,&b);
    int min = (a<b)? a:b;
    printf("Minimum: %d",min);
    
return 0;
}