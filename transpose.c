#include<stdio.h>
#include<stdlib.h>

int main()

{
   int rows,columns,matrix[10][10],transpose[10][10];
   int i,j;
    printf("Enter the number the of Rows: ");
    scanf("%d",&rows);

    printf("Enter the number the of Columns: ");
    scanf("%d",&columns);

    printf("Enter the elements: ");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++){

            printf("[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);

        }
    }
    printf("Original Matrix : \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("[%d][%d] : %d",i,j,matrix[i][j]);

        }
        printf("\n");
}
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            transpose[j][i]=matrix[i][j];
        }

    }
    printf("Transpose of matrix is: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("[%d][%d] : %d",i,j,transpose[i][j]);

        }
        printf("\n");
} return 0;
}
