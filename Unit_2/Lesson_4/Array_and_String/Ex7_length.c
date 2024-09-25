#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    // Output the length
    printf("Length of string: %d", length);
    
    return 0;
}
