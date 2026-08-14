#include<stdio.h>
int main()
{

    char str[100];
    char result[100]; // Array to store the result without duplicates
    int found;
    int i, j=0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Entered string: %s\n", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        int found = 0; // Flag to check if the character is already in the result
        for(int k =0;k<j;k++)
        {
            
            if(str[i]==result[k])
            {
                found = 1;
                break; // Skip this character as it has already been counted
            }
        }
        if(found == 0)
        {
            result[j] = str[i];
            j++;
        }
    }
result[j] = '\0'; // Null-terminate the result string
printf("String after removing duplicates: %s\n", result);
return 0;
}