#include<stdio.h>
int secondlargest(int arr[],int n)
{
    int i,largest,secondlargest;
    largest=arr[0];
    secondlargest=arr[1];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest=arr[i];

        }
        else if((arr[i]>secondlargest) && (arr[i]!=largest)){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main()
{

    int arr[5];
    int result;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    result = secondlargest(arr,5);
    printf("results:%d",result);
    return 0;
}