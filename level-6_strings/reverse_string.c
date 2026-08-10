#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int length =0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("length of string is: %d\n",length);
    int start =0;
    int end = length-1;
    char temp;
    while(start<end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("reversed string is: %s\n",str);
    return 0;
}