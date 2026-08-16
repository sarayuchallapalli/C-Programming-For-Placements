#include<stdio.h>
struct student {
    int age;
};
void display(struct student s){
    s.age = 50;
}
void change(struct student *s){
    (*s).age = 50;
}
int main()
{
    struct student s1;
    s1.age = 20;
    display(s1);//only value copy to s but s1 doesnt change
    printf("%d\n",s1.age);
    change(&s1);// the original value get changed
    printf("%d",s1.age);
    return 0;

}