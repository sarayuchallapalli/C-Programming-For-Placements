#include<stdio.h>
int a[10],b[10];
int n=10;
int m=0;
int main()
{
    
    printf("enter the numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int duplicate_found = 0;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                duplicate_found = 1;
                break;
            }
        }
        if(duplicate_found==0){
            b[m] = a[i];
            m++;
        }
    }
    printf("array after removing duplicates is:\n");
    for(int i=0;i<m;i++){
        printf("%d\n",b[i]);
    }
 return 0;
}