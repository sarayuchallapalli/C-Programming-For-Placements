#include <stdio.h>

int main()

{
    int i = 1;
    int a = 5;

    while(i<=10)
    {
        printf("%d\n", i);
        i++;
    }
    while(i=0)
    {
        printf("%d\n", i);//while loop will not execute because the condition is false (i=0 assigns 0 to i, which is false)
        i++;
    }
     while(a)
    {
        printf("%d ", a);
        a--;
    }
    return 0;
}
