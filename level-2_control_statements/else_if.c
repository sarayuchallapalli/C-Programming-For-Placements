#include<stdio.h>

int main()
{
    int marks = 80;
    if(marks >= 90)
    {
        printf("A\n");
    }
    else if(marks >= 80)
    {
        printf("B\n");
    }
    else if(marks >= 70)
    {
        printf("C\n");
    }
    else if(marks >= 60)
    {
        printf("D\n");
    }
    else if(marks >= 50)
    {
        printf("E\n");
    }
    else if(marks >= 40)
    {
        printf("pass\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}