#include<stdio.h>
typedef struct{
    int age;
    int roll;
}student;
int main(){
    student s1;
    student s2;
    s1.age=90;
    s2.roll=7;
    printf("%d%d",s1.age,s2.roll);
    return 0;
}