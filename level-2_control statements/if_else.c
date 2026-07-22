#include<stdio.h>

int main()
{
int x=10;
  if(x==5)
{
    printf("A\n");
}
else
{
    printf("B\n");
}
if(x=0)//ZERO CONSIDERS FALSE
    printf("C\n");
else
    printf("D\n");
printf("%d\n",x);
}