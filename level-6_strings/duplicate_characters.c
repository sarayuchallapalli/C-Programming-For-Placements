#include<stdio.h>
int main()
{
    char str[100];
    int i,j;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
        int alreadyCounted = 0;
        for(j=0;j<i;j++)
        {
            if(str[i] == str[j])
            {
                alreadyCounted = 1;
                break;
            }
        }
        if(alreadyCounted == 1)
        {
        continue; // Skip this character as it has already been counted
        }
    
    for(j=i+1;str[j]!='\0';j++)
    {
        if(str[i] == str[j])
        {
            printf("Duplicate character: %c\n",str[i]);
            break; // Break after finding the first duplicate for this character
        }
    }
}
return 0;
}