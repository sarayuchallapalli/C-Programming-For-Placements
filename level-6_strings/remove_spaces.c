#include<stdio.h>
int main()
{

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a line of input including spaces
    printf("entered: %s\n",str);
    int i=0,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
             continue; // Skip spaces
        
            str[j] = str[i];
            j++;
        
    }
    str[j] = '\0'; // Null-terminate the modified string
    printf("String after removing spaces: %s\n", str);
    return 0;
}