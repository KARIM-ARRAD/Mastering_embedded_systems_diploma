#include<stdio.h>

int main(){
    char a=0;
    printf("Enter a character: ");
    scanf("%c", &a);
    if(a=='A' | a=='a' | a=='U' | a=='u' |a=='e' | a=='E' | a=='O' |a=='o' | a=='I' | a=='i'){
        printf("The character '%c' is a vowel", a);
    }else{
        printf("The character '%c' is a consonant", a);
    }
}