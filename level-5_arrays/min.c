#include<stdio.h>

int main()

{

    int a[5];
  
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
      int min = a[0];
     for(int i=0;i<5;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("The minimum element is: %d\n", min);
    return 0;
}