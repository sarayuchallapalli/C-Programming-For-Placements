#include<stdio.h>
struct student 
{
    int roll;
    int marks;

};
int main()
{
    struct student s1[3]={
        {101,90},
        {102,80},
        {103,100}

    };
    int max = s1[0].marks;
    int roll = s1[0].marks;
    for(int i=0;i<3;i++){
        if(s1[i].marks>max){
            max = s1[i].marks;
            roll = s1[i].roll;
        }
    }
    printf("max and roll of a student%dand%d",max,roll);
    return 0;
}