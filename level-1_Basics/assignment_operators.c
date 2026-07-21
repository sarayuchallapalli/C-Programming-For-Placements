#include <stdio.h>

int main()
{
    int a = 25;

    a /= 5;
    a += 3;
    a %= 4;

    printf("%d", a);

    return 0;
}