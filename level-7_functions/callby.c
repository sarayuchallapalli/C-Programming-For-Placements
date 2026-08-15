#include<stdio.h>
void change(int a){//call by value
    a=10;
    
}
void change1(int *b){//call by reference
    *b=10;
    
}
int main()
{
    
    int a=5;
    printf("before change %d\n",a);
    change(a);
    printf("after change %d\n",a);
    change1(&a);
    printf("after change1 %d\n",a);
    return 0;
}
