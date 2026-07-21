#include<stdio.h>

int main()

{

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Bitwise AND: %d\n", a & b);//both bits are 1, then only it will return 1 otherwise 0
    printf("Bitwise OR: %d\n", a | b);//both bits are 0, then only it will return 0 otherwise 1
    printf("Bitwise XOR: %d\n", a ^ b);//both bits are same, then it will return 0 otherwise 1
    printf("left shift: %d\n", a << 1);//shifting the bits to left by n position, which is equivalent to multiplying the number by 2^n
    printf("right shift: %d\n", a >> 1);//shifting the bits to right by n position, which is equivalent to dividing the number by 2^n
    printf("Bitwise NOT: %d\n", ~a);//inverts the bits of the number, changing 1s to 0s and 0s to 1s and to finf the value of ~a, we can use the formula: ~a = -(a + 1) and for magnitude manually we invert the bits and add 1 to the result.
    return 0;
}