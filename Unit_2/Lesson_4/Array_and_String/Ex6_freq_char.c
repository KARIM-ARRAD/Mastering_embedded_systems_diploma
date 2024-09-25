#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i, count = 0;
    
    // Input the string
    printf("Enter a string: ");
    gets(str);
    
    // Input the character to search for
    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch); 

    // Search for the character in the string
    for (i=0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("Frequency of %c = %d", ch, count);
    
    return 0;
}
