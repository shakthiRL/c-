#include <stdio.h>

int main() {
    int matrix[100][100];
    int n, sum_primary = 0, sum_secondary = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");

    // Input elements of the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < n; ++i) {
        sum_primary += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < n; ++i) {
        sum_secondary += matrix[i][n - i - 1];
    }

    // Output the sum of diagonals
    printf("Sum of primary diagonal: %d\n", sum_primary);
    printf("Sum of secondary diagonal: %d\n", sum_secondary);

    return 0;
}

