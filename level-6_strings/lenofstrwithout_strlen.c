#include<stdio.h>
char str[100];
 int count =0;
int i=0;
int main()

{
    
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);

    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of string is: %d\n",count);
   return 0;
}