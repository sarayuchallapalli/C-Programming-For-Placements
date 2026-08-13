#include<stdio.h>
int reverse(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}

int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==reverse(n))
        printf("%d is a palindrome number.\n",n);
    else
        printf("%d is not a palindrome number.\n",n);
    return 0;
}