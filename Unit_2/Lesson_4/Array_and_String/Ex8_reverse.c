#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start = 0;
    int end = 0;
    int length;

    // Input the string from the user
    printf("Enter the string: ");
    fgets(str);
   
    // Find the length of the string
    length = srtlen(str);
    
    // Swap characters from start till the end 
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }    

    // Output reversed string
    printf("Reverse string is: %s", str);
    
    return 0;
}
