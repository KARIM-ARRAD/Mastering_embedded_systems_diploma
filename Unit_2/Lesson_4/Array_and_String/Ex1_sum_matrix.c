#include <stdio.h>

int main() {
    // Declare matrixs
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    // Elements for the first matrix
    printf("Enter the elements of 1st matrix:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Elements for the second matrix
    printf("Enter the elements of 2nd matrix:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Sum of matrices
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display result
    printf("Sum of Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
