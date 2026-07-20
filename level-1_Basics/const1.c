#include<stdio.h>

int main()
{
    const int age = 5;

    printf("The value of age is: %d\n", age);
    /*age = 10; 
    printf("The new value of age is: %d\n", age);
    // This would cause a compilation error*/
    const int x = 10;
    int y = x;// y is not a constant, so it can be modified
    printf("%d\n", y);
    y = 20;
    printf("The new value of y is: %d\n", y);
    return 0;
}