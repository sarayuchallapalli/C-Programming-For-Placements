#include<stdio.h>
int armstrong(int n)//sum of cubes of digits is equal to the number itself
{
    int sum=0,temp=n;
    while(n>0)
    {
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return sum==temp;
}
int main()

{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("%d is an Armstrong number.\n",n);
    else
        printf("%d is not an Armstrong number.\n",n);
    return 0;
}