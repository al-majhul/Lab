#include <stdio.h>
int main(){
    char ch;
    printf("Enter a chracter \n");
    scanf("%c",&ch);
    if ((ch>=65 && ch<=90)|| (ch>=97 && ch<=122))
    {
        printf("Letter\n");
        switch (ch)
        {
        case 'A':

        case 'E':

        case 'I':

        case 'O':
        
        case 'U':

        case 'a':
        
        case 'e':

        case 'i':
        
        case 'o':
        
        case 'u':
            printf("Vowel\n");
            break;
        
        default:
        printf("Consonent\n");
            break;
        }
    }else if (ch==32)
    {
        printf("Space\n");
    }else if (ch>=48 && ch<=56)
    {
       printf("Digit\n");
    }else{
        printf("Special charecter\n");
    }


return 0;
}