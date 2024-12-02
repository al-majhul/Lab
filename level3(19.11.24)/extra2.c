#include <stdio.h>
int main(){
    float marks;
    float min=20;
    float sum=0;
    printf("Enter marks: ");
    
    for (int i = 0; i < 4; i++)
    {
    scanf("%f",&marks);
    if (marks<min)
    {
        min = marks;       
    }
    sum = sum+marks;
    }
    printf("Avarage: %.2f",((sum-min)/3));
return 0;
}

// 1 2 3 4