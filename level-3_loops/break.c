#include<stdio.h>

int main()

{
     int i;
     for(i = 1; i <= 5; i++)
{
    if(i == 3)
    {
        break;//break statement will terminate the loop when i is equal to 3
    }

    printf("%d ", i);
}

printf("\n");

    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("%d%d ", i, j);

            if(j == 2)
            {
                break;//break always affects only the nearest loop.
            }
        }

        printf("\n");
    }
    for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        if(j == 2)
        {
            break;
        }

        printf("%d%d ", i, j);
    }

    printf("\n");
}

    return 0;

}