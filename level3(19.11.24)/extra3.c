#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (((a+b)>c || (b+c)>a || (c+a)>b) && (a>0 && b>0 && c>0))
    {
        if ((a==b)&&(b==c))
        {
            printf("Equilaterial");
        }else if((a==b)||(b==c)||(c==a)){
            printf("Isoscale\n");
        }else
        {
            printf("Scalene\n");
        }
    }else{
        printf("Invalid\n");
    }
    
return 0;
}