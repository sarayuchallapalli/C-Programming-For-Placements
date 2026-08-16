#include<stdio.h>

int main()
{

    int a = 10;
    int *p =&a;
    int **q = &p;
    printf("%d",**q);
    **q = 50;
    printf("%d",**q);
    return 0;
}