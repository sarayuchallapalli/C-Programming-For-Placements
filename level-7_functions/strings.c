#include<stdio.h>
void string(char str[])
{
    str[0] = 'A';
}
int main()
{
    char str[] = "HELLO";
    string(str);
    printf("%s",str);
    return 0;
}