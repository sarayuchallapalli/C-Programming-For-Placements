#include<stdio.h>
int main()
{
    int a[10];
    printf("enter the numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        int already_counted = 0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                already_counted = 1;
                break;
            }}
            if(already_counted==1){
                continue;
            }
        int count = 1;
        for(int j=i+1;j<10;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("frequency of %d is %d\n",a[i],count);
    }
    
 return 0;
}

