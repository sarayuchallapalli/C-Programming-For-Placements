#include<stdio.h>
int main()

{

    char str1[100];
    char str2[100];
    int i=0,j=0;
    printf("Enter a string: ");
    scanf("%s",str1);
    printf("first string: %s\n",str1);
    printf("Enter another string: ");
    scanf("%s",str2);
    printf("second string: %s\n",str2);
    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string is: %s\n",str1);
    return 0;
}