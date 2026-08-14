#include<stdio.h>

int main()
{
    int a[10],i,j,temp,n=10;
    printf("enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("unsorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
 return 0;
}