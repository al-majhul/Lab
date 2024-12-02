#include <stdio.h>
int main(){
    int day;
    printf("Enter day count:\n");
    scanf("%d",&day);
    printf("Month count: %d month and %d day",day/30,day%30);
return 0;
}