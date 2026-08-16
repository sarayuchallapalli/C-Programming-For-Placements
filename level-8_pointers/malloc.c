#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    printf("enter a size:");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    for(int i = 0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;
}