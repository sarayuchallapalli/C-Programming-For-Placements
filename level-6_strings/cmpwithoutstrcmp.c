#include<stdio.h>
int main()

{

    char str[100];
    char sara[100];
    int i=0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("first string: %s\n",str);
    printf("Enter another string: ");
    scanf("%s",sara);
    printf("second string: %s\n",sara);
    while((str[i]!='\0' && sara[i]!='\0')&&(str[i]==sara[i]))
    {
        
        i++;
    }
    printf("Comparison result: %d\n", (str[i] == sara[i]) ? 0 : ((str[i] < sara[i]) ? -1 : 1));
    return 0;
}