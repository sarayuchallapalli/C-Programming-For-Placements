#include<stdio.h>
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
       int key = arr[i];
        int j =i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}
int main()
{

    int arr[6],n=6;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,6);
    printf("sortedarray : ");
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
     return 0;
}