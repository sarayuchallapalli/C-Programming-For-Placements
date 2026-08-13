#include<stdio.h>
int factors(int n)//print all factors of a number
{
    printf("Factors of %d are: ",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}

int main()
{
    
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    factors(n);
    return 0;
}