#include<stdio.h>

int main()

{
    int a=10;
    int b=0;

    if(a>20)
    {
        if(b==0)
        {
            printf("B\n");
        }
        else
        {
            printf("C\n");
        }
        printf("A\n");
    }
    if(a>b)
    {
        if(b=5)
        {
            printf("D\n");
        }
        else
        {
            printf("E\n");
        }
    }
    printf("F\n");
    return 0;
}