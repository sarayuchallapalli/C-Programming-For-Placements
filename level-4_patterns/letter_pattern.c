#include<stdio.h>

int main()
{
   for(int i=4;i>=1;i--){
    for(int j=i;j<=4;j++){
        printf("%c",'A'+j-1);
    }
    printf("\n");
   }
   return 0;
}