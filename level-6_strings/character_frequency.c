#include<stdio.h>
int main()
{
    
    char str[100];
    int i=0;
    int frequency[256] = {0}; // Array to store frequency of each character

    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);

    // Count frequency of each character
    while(str[i]!='\0')
    {
        frequency[(unsigned char)str[i]]++;
        i++;
    }

    // Print the frequency of each character
    printf("Character frequencies:\n");
    for(i=0; i<256; i++)
    {
        if(frequency[i] > 0)
        {
            printf("'%c' : %d\n", i, frequency[i]);
        }
    }

   return 0;
}