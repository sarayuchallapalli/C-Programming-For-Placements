#include<stdio.h>
void autos(){
    auto  n =100;
    n++;
    printf("%d",n);
}
void fun(){
    static int n =0;
    n++;
    printf("%d",n);
}
int main()
{

    autos();
    autos();
    fun();
    fun();
    return 0;
}