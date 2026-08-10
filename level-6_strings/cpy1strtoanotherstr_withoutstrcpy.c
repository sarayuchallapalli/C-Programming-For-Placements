#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    char destination[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);

    while(str[i]!='\0')
    {
        destination[i] = str[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
    printf("copied string is: %s\n",destination);
   return 0;
}