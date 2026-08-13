#include<stdio.h>
int gcd(int a,int b)//greatest common divisor
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int lcm(int a,int b)//least common multiple
{
    return (a*b)/gcd(a,b);
}

int main()
{
    
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d.\n", a, b, gcd(a, b));
    printf("LCM of %d and %d is %d.\n", a, b, lcm(a, b));
    return 0;
}