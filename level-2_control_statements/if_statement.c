#include<stdio.h>

int main()
{
    int x=10,y=0;
    if(x>20)
    {
        printf("A\n");
    }
    printf("B\n");//if expression is false, it will not execute the statement in the if block but will execute the statement after the if block.
    if(y)//ZERO CONSIDERS FALSE
        printf("C\n");
    printf("D\n");
    return 0;
}