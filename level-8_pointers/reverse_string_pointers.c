#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char *start,*end,temp;
    printf("enter a string:");
    scanf("%s",str);
    int length = strlen(str);
    start = str;
    end = str + length - 1;
    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("string%s\n",str);
    return 0;

}