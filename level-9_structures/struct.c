#include<stdio.h>
#include<string.h>
int main(){
    struct student {
        int age;
        char name[50];
        float marks;
    };
    struct family {
        int age;
        char name[30];
    };
    struct family s2,s3;
    s2.age = 30;
    strcpy(s2.name,"balu");
    s3.age = 28;
    strcpy(s3.name,"aruna");
    struct student s1;
    s1.age = 25;
    strcpy(s1.name,"sarayu");
    s1.marks = 99.9;
    printf("student s1 age %d",s1.age);
    printf("family member 1:%s",s3.name);
    
    return 0;

}