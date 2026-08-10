#include<stdio.h>
int main()
{
    char str[100];
    int vowels=0;
    int consonants=0;
    int digits=0;
    int special=0;
    int i=0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("entered: %s\n",str);
    for(i=0;str[i]!='\0';i++)
    {
    if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }
    else if(str[i]>='0' && str[i]<='9')
    {
        digits++;
    }
    else
    {
        special++;
    }
}
    printf("vowels: %d\n",vowels);
    printf("consonants: %d\n",consonants);
    printf("digits: %d\n",digits);
    printf("special characters: %d\n",special);
    return 0;
}