#include<stdio.h>

int main()

{
    
    int a[5];
    int sum=0;
    
    printf("enter the number:");
    for(int i =0;i<5;i++){
    scanf("%d",&a[i]);}
    
    for(int i = 0;i<5;i++){
    sum += a[i];}
    printf("sum of the elements:%d",sum);
    return 0;
    
}