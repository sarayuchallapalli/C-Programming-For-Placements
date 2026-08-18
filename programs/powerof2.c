#include<stdio.h>
int main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    if(n>0 && (n&(n-1))==0){
        printf("n is a power of 2");
    }
    else{
        printf("n is not a power of 2");
    }
    return 0;
}