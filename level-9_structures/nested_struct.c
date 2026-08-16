#include<stdio.h>
struct date {
    
    int day;
    int month;
    int year;
};
struct student 
{
    int roll;
    struct date dob;
};
int main()
{
struct student s1;
s1.roll=45;
s1.dob.day=21;
s1.dob.month=01;
s1.dob.year=2026;
printf("%d%d%d",s1.roll,s1.dob.day,s1.dob.month);
return 0;
}