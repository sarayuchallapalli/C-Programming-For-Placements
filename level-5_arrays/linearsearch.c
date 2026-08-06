#include<stdio.h>

int main()

{
    
  int a[5];
  int key=0;
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d",&key);
    for(int i=0;i<5;i++){
        if(a[i]==key){
            printf("The number %d is found at index %d\n",key,i);
            return 0;
        }
    }
    printf("The number %d is not found in the array\n",key);
    return 0;
}