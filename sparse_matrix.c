#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int A[r][c];
    printf("Enter matrix:\n");

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    int count=0;

    // count non-zero
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(A[i][j]!=0)
                count++;

    int sparse[count+1][3];

    sparse[0][0]=r;
    sparse[0][1]=c;
    sparse[0][2]=count;

    int k=1;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(A[i][j]!=0)
            {
                sparse[k][0]=i;
                sparse[k][1]=j;
                sparse[k][2]=A[i][j];
                k++;
            }
        }
    }

    printf("Sparse Matrix:\n");
    for(int i=0;i<=count;i++)
        printf("%d %d %d\n",sparse[i][0],sparse[i][1],sparse[i][2]);
}
