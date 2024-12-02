// #include <stdio.h>
// int main(){
//     int num[4];
//     int max=0;
//     printf("Enter 4 number: ");
    
//     scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);
//     for (int i = 0; i < 4; i++)
//     {
//         if (num[i]>max)
//         {
//             max = num[i];
//         }
//     }
//     printf("Maximum : %d",max);
// return 0;
// }

#include <stdio.h>
int main(){
    int num;
    int max=0;
    printf("Enter 4 number: ");
    for (int i = 0; i < 4; i++)
    {
    scanf("%d",&num);
        if (num>max)
        {
            max=num;
        }
    }
    printf("Maximum : %d",max);
return 0;
}