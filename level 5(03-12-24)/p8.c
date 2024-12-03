#include <stdio.h>
int main(){
    int row =5;
    // scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int x = 0; x < row-i; x++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", (i + 1));
        }
        printf("\n");
    }
return 0;
}