#include<stdio.h>

int main()

{

    int a[5];
    
    int sum=0;
    
    printf("enter the number:");
    for(int i =0;i<5;i++){
    scanf("%d",&a[i]);}
    for(int i=0;i<5;i++){
        sum += a[i];
    }
    float average = (float)sum / 5;
    printf("Average: %.2f\n", average);
    return 0;
}