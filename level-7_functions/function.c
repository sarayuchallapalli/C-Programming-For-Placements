#include<stdio.h>
void basic(){// no arguments and no return type//function definition
    printf("start\n");
}
void basic1(int a){// with arguments and no return type
    printf("nothing %d\n",a);
}
int basic2(){// no arguments and with return type
    printf("nothing\n");
    return 0;
}
int basic3(int a){// with arguments and with return type
    
    return a;
}
int add(int a,int b);//function declaration
int main()
{

    int result;
    basic();//function call
    basic1(5);
    basic2();
    basic3(5);
    result=add(5,6);
    printf("result is %d",result);
    return 0;
}
int add(int a,int b){//function definition
    return a+b;
}