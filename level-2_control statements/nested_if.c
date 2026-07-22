#include<stdio.h>

int main()
{
    int a = 0;
    int b = 10;
    if(a)
    {
        if(b)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    else
    {
        if(b)
        {
            printf("C\n");
        }
        else
        {
            printf("D\n");
        }
    
    }
    printf("f");
    return 0;
} 