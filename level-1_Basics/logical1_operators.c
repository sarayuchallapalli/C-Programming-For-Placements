#include<stdio.h>

int main()

{
    int a = 5;

    printf("%d\n",(a<10|| a++));// if first condition is true then next condition not executing
    printf("%d\n",a);
    printf("%d\n",(a>10|| ++a));//any non zero value is considered as true
    printf("%d\n",a); 
    return 0;
}