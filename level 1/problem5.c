#include <stdio.h>
int main(){
    double base,height;
    printf("Enter the value of base and height of triangle\n");
    scanf("%lf %lf",&base,&height);
    printf("The areaof the triangle is: %.2lf",0.5*base*height);
return 0;
}