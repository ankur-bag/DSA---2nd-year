//Assignment 2: Implement functionalities for matrix addition, matrix multiplication, and sparse matrix representation.
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,m;
    printf("Enter the size of the row: ");
    scanf("%d" , &n);
    printf("Enter the size of the column: ");
    scanf("%d" , &m);

    int A[n][m], B[n][m], sum[n][m];

    printf("enter elements for matrix A: \n ");
    //taking elements input for matrix A
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
        printf("enter elements for matrix B: \n ");


    //taking elements input for matrix A
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
//Matrix addition
for(int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {
        sum[i][j] = A[i][j] + B[i][j];
    }
}
printf("Added Matrix : \n");
//Display matrix
for(int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {
        printf("%d ", sum[i][j]);
    }
    printf("\n");
}


}