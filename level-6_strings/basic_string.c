//string is nothing but 1D array of characters
#include<stdio.h>
#include<string.h>
char str[100];
char sara[100];
int main()

{

    
    char destination[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);
    printf("Enter a string: ");
    scanf("%s",sara);
    printf("entered: %s\n",sara);

    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));
    strcpy(destination,str);
    printf("copied string is: %s\n",destination);
    int result = strcmp(str,sara);
    printf("Comparison result: %d\n",result);
    strcat(str,sara);
    printf("Concatenated string is: %s\n",str);
   //strlen() is used to find the length of string
    //sizeof() is used to find the size of string
   return 0;
}