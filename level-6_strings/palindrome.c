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
    int start = 0;
    int end = length-1;
    
    int isPalindrome = 1; // Assume it is a palindrome
    while(start<end)
    {
        if(str[start] != str[end])
        {
            isPalindrome = 0; // Not a palindrome
            break;
        }
       
        start++;
        end--;
    }
    if(isPalindrome==1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}