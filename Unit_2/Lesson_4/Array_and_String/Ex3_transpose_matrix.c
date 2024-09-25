#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[rows][cols];
    int transpose[rows][cols];

    // Dimensions of matrix
    printf("Enter row and column of matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter element a[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the transpose
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print original matrix
    printf("\n Enterred Matrix:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\n Transpose of Matrix:\n");
    for(i=0; i<cols; i++) {
        for(j=0; j<rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
