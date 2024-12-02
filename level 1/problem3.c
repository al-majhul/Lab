#include <stdio.h>
int main(){
    double doller;
    float rate=119.64;
    printf("Enter the value of doller:\n");
    scanf("%lf",&doller);
    printf("Today rate: %.2f\nThe value of taka: %.2lf",rate,doller*rate);
return 0;
}