#include<stdio.h>
    int binarysearch(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    
    while(low<=high){
        int mid=(low+high)/2;
    if(arr[mid]==key){
            return mid;
        }
        else if (key>arr[mid])
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
        
    }
    return -1;
}
    int main(){
    int key;
    int arr[7];
    int n=7;
    int result;
    printf("enter an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        
           
    }
    
    result = binarysearch(arr,7,key);
    if(result != -1){
    printf("binarysearch %d",result);}
    else
    {
        printf("not found");
    }
    return 0;
}