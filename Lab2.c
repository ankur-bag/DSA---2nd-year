//Assignment 2: Implement functionalities for matrix addition, matrix multiplication, and sparse matrix representation.
#include <stdio.h>

int main() {
    int r, c;
    int A[10][10], B[10][10], sum[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
