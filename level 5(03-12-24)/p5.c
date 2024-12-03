#include <stdio.h>
int main(){
    int x,n;
    float result=1.00;
    scanf("%d %d",&x,&n);
    if (n>=0)
    {
          for (int j = 0; j < n; j++)
        {
            result = result*x;
        }
    }else{
        n = n*-1;
            for (int j = 0; j < n; j++)
        {
            result = result/(float)x;
        }
    }
    
        
       
    printf("%f",result);
    
return 0;
}