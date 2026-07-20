#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", (a > b) && (a < 20));
    printf("%d\n", (a < b) || (a == 10));

    return 0;
}