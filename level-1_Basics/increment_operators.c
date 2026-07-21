#include<stdio.h>

int main()
{
    int a = 5;
    int b = a++;
    printf("%d\n", a++);
    printf("%d %d\n", a,b);
    b = ++a;
    printf("%d\n", ++a);
    printf("%d %d\n", a,b);

    printf("%d\n",a = a++ + ++a);//in standard C, the behavior of this expression is undefined because it modifies 'a' more than once between sequence points. The result may vary depending on the compiler and optimization settings.
    return 0;
}