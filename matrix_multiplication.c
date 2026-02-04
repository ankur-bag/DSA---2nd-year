#include <stdio.h>

int main()
{
    int n,m,x,y;

    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d",&n,&m);

    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d",&x,&y);

    if(m!=x)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int A[n][m], B[x][y], C[n][y];

    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<y;j++)
        {
            C[i][j]=0;
            for(int k=0;k<m;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<y;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    return 0;
}
