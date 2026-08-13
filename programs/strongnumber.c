#include<stdio.h>
int strong(int n)//sum of factorial of digits is equal to the number itself
{
    int sum=0,temp=n;
    while(n>0)
    {
        int digit=n%10;
        int fact=1;
        for(int i=1;i<=digit;i++)
            fact*=i;
        sum+=fact;
        n/=10;
    }
    return sum==temp;
}

int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(strong(n))
        printf("%d is a Strong number.\n",n);
    else
        printf("%d is not a Strong number.\n",n);
    return 0;
}