#include<stdio.h>

int main()

{
    
    int a[5];
    printf("enter the numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int largest = a[0];
    int second_largest = a[0];
    for(int i=1;i<5;i++){
        if(a[i]>largest){
            second_largest = largest;
            largest = a[i];
        }
        else if(a[i]>second_largest && a[i]!=largest){
            second_largest = a[i];
        }
    }
    printf("second largest number is %d",second_largest);
    return 0;
}