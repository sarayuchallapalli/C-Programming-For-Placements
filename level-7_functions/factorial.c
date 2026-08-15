#include<stdio.h>
int fun(int n)
{
    if(n==0)
     return 1;
    int fact= n*fun(n-1);
}
int main()
{
    int factorial;
    factorial = fun(5);
    printf("%d",factorial);
}