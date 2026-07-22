#include<stdio.h>

int main()
{
    int x=20;
    int y=10;
    int z= (x>y)? x*2:y/2;
    printf("z = %d\n", z);
    //if the condition is true, it will return the first value, else it will return the second value.
    int a= (x<y)? x*2:y/2;
    printf("a = %d\n", a);
    return 0;
}