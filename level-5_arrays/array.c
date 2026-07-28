#include<stdio.h>

int main()
{
    int a[5];
    int sum=0;
    
    printf("enter the number:");
    for(int i =0;i<5;i++){
    scanf("%d",&a[i]);}
    int max=a[0];
    int min=a[0];
    for(int i=0;i<5;i++){
    printf("%d\n",a[i]);}
    
    for(int i=0;i<5;i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("max of the elements is:%d\n",max);
    for(int i=0;i<5;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("min of the elements is:%d\n",min);
    for(int i = 0;i<5;i++){
    sum += a[i];}
    printf("sum of the elements:%d",sum);
    return 0;
    
}