#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    int c = 10;

    printf("%d\n", c = 5);
    printf("%d\n", c == 5);
    return 0;

}