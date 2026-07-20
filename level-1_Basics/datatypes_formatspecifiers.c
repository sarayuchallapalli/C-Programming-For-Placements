#include<stdio.h>

int main()
{
    int age = 5;
    char grade = 'A';
    float height = 5.9;
    double weight = 70.566666;

    printf("The value of age is: %d\n", age);
    printf("The value of grade is: %c\n", grade);
    printf("The value of height is: %.1f\n", height);
    printf("The value of weight is: %lf\n", weight);
    return 0;
}