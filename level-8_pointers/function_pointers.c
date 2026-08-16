#include<stdio.h>
int multiply(int a, int b){
    return a*b;
}

int main()
{
int (*fp)(int , int) = multiply;
    printf("%d",fp(4,5));
    return 0;
}