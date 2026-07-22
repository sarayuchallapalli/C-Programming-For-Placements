#include<stdio.h>

int main()
{
    int i =7;
    do
    {
        printf("%d\n", i);//do while loop will execute at least once because the condition is checked after the execution of the loop body
        i--;
    }
    while(i>0);
    return 0;
}