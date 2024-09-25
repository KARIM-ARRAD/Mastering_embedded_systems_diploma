#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;
    float numbers[100];
    
    // Number of data
    printf("Enter the numbers of data : ");
    scanf("%d", &n);
    
    // Read all elements and sum
    for (i=0; i<n; i++) {
        printf("Enter number %d : ", i+1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    
    // Average
    average = sum/n;
    
    // Output the average
    printf("Average = %.2f\n", average);
    
    return 0;
}
