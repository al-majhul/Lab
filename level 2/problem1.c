#include <stdio.h>
int main(){
    int s;
    printf("Enter time in second:\n");
    scanf("%d",&s);
    int h=s/3600;
    int m= (((float)s/3600)-h)*60;
    int s2= (( (((float)s/3600)-h)*60)-m)*60;
    printf("%d : %d : %d",h,m,s2);
return 0;
}