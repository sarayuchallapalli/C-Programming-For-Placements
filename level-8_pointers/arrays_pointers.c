#include<stdio.h>
int main()
{

    int arr[]={1,3,56,7,8};
    int *p = arr;
    
    printf("%d\n",*p);
    p++;
    printf("%d",*(arr+1));
    return 0;
}