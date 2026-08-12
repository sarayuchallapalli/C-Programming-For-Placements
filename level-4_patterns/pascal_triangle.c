#include<stdio.h>
int main()

{
    
    int num;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= 5-i;j++)
        {
            printf(" ");
        
        }
           num = 1;
        for(int j = 0; j <= i; j++)
        {
            printf("%d ",num);
         num = num * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}