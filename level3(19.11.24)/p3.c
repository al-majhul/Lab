#include <stdio.h>
int main(){
    float num1 ,num2;
    printf("Enter two number: ");
    scanf("%f %f",&num1,&num2);
    char c;
    printf("Enter oparation you want to do : \n");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n",num1,num2,(num1+num2));
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n",num1,num2,(num1-num2));
        break;
    case '*':
        printf("%.2f x %.2f = %.2f\n",num1,num2,(num1*num2));
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n",num1,num2,(num1/num2));
        break;
    default:
    printf("Invalid input\n");
        break;
    }
return 0;
}