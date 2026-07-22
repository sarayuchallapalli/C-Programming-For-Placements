#include<stdio.h>

int main()
{
    int choice=2;
    switch(choice)
    {
        case 1:
            printf("A\n");
            break;
        case 2:
            printf("B\n");
            break;
        case 3:
            printf("C\n");
            break;
        default:
            printf("D\n");
    }
    int letter= 'A';
    switch(letter)
    {
        case 'A':
            printf("A\n");
            
        case 'B':
            printf("B\n");
            
        case 'C':
            printf("C\n");
        
        default:
            printf("D\n");//if no break statement is used, it will execute all the statements after the case which is true.
    }
    return 0;
}