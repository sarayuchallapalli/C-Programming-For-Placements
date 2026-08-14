#include<stdio.h>
int main()
{

    int a[100][100],b[100][100],c[100][100],d[100][100],crows,cols,i,j;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &crows, &cols);
    printf("Enter the elements of matrix A:\n");
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // Perform matrix addition
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            d[i][j] = a[i][j] - b[i][j];
        }
    }
    // Display the result
    printf("The sum of the two matrices is:\n");
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("The difference of the two matrices is:\n");
    for(i=0; i<crows; i++)
    {
        for(j=0; j<cols; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}