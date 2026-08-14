#include<stdio.h>
int main()
{
    
    int a[10];
    printf("enter the numbers:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        int duplicate_found = 0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                duplicate_found = 1;
                break;
            }
        }
        if(duplicate_found==1){
            continue;
        }
    }
    printf("no duplicate elements found\n");
    for(int i=0;i<10;i++){
        
        for(int j=i+1;j<10;j++){
            if(a[i]==a[j]){
                printf("element %d is duplicate\n",a[i]);
            }
        }
    
    }
    return 0;
}