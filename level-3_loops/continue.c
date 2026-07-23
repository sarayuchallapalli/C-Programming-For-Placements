#include<stdio.h>

int main()

{
    int i;

    for(i = 1; i <= 5; i++)
{
    if(i == 3)
    {
        continue;//continue statement will skip the current iteration when i is equal to 3
    }

    printf("%d ", i);
}
printf("\n");
for(i = 1; i <= 5; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        printf("%d ", i);

        printf("B ");
    }

    printf("\n%d", i);


    return 0;
}