#include<stdio.h>
int count_digits(int n)//count number of digits in a number
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}

int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Number of digits in %d is %d.\n",n,count_digits(n));
    return 0;
}