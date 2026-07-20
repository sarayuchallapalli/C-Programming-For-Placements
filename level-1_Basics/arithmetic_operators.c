#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is: %d\n",a,b,a+b);
    printf("The difference of %d and %d is: %d\n",a,b,a-b);
    printf("The product of %d and %d is: %d\n",a,b,a*b);
    printf("The quotient of %d and %d is: %d\n",a,b,a/b);
    printf("The remainder of %d and %d is: %d\n",a,b,a%b);
    return 0;
}