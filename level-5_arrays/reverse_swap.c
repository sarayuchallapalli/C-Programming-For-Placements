#include<stdio.h>

int main()

{

    int a[5];
    
    
    printf("enter the number:");
    for(int i =0;i<5;i++){
    scanf("%d",&a[i]);}
    
   
       int temp;
       int start=0;
       int end=4;
        while(start<end){
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;

        }
        for(int i=0;i<5;i++){
            printf("%d\n",a[i]);
        }

return 0;
}