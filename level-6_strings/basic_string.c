//string is nothing but 1D array of characters
#include<stdio.h>
#include<string.h>
char str[100];
int main()

{

    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);

    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));
   //strlen() is used to find the length of string
    //sizeof() is used to find the size of string
   return 0;
}