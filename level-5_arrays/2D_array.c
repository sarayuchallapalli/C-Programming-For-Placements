#include <stdio.h>
int a[100][100];
int rows, cols;
int i,j;
int main()
{
    
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &cols);
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d", &a[i][j]);
    }
}
printf("The 2D array is:\n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
return 0;
}