#include <stdio.h>
int main(){
    double c,f;
    printf("Enter the value temparature in celcious scale:\n");
    scanf("%lf",&c);
    f=((c/5)*9)+32;
    printf("The value of temparature in fahrenheit: %lf",f);
return 0;
}