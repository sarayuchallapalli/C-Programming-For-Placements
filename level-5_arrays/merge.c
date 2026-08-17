#include<stdio.h>
void merge(int a[],int b[],int c[],int n1,int n2){
    int i=0,j=0,k=0;
    while(i<n1&& j<n2){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i < n1)
{
    c[k] = a[i];
    i++;
    k++;
}

while(j < n2)
{
    c[k] = b[j];
    j++;
    k++;
}
    }
int main()
{

    int a[6],n1=6;
    int b[3],n2=3;
    int c[9];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<3;j++){
        scanf("%d",&b[j]);
    }
    merge(a,b,c,6,3);
    for(int k =0 ;k<9;k++){
        printf("%d",c[k]);
    }
    return 0;
}