#include<stdio.h>
int digitsum(int n)//sum of digits of a number
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int product(int n)//product of digits of a number
{
    int prod=1;
    while(n>0)
    {
        prod*=n%10;
        n/=10;
    }
    return prod;
}
int main()

{

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d.\n",n,digitsum(n));
    printf("Product of digits of %d is %d.\n",n,product(n));
    return 0;
}