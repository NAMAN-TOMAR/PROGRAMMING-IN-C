//
// Created by NAMAN TOMAR on 28-09-2025.
//#include <stdio.h>

int main() {
    int m, n, p, q;

    printf("Enter rows and columns of Matrix A (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of Matrix B (p x q): ");
    scanf("%d %d", &p, &q);

    if(n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    int A[m][n], B[p][q], result[m][q];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < p; i++)
        for(int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix to 0
    for(int i = 0; i < m; i++)
        for(int j = 0; j < q; j++)
            result[i][j] = 0;

    // Matrix multiplication
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++)
            printf("%4d", result[i][j]);
        printf("\n");
    }

    return 0;
}
