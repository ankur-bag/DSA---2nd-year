#include <stdio.h>
int main()
{
    int row,col;
    printf("Enter no. of rows \n");
    scanf("%d", &row);
    printf("Enter no. of cols \n");
    scanf("%d", &col);

    int A[row][col];

    printf("enter the elements of the matrix \n");

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Original Matrix \n");

        for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }


    printf("Transpose Matrix \n");

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d", A[j][i]);
        }
        printf("\n");
    }

    
}