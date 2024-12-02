#include <stdio.h>
#include <math.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter point 1:\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter point 2:\n");
    scanf("%d %d",&x2,&y2);
    double result = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("The distance of two point: %lf2",sqrt(result));
    
return 0;
}