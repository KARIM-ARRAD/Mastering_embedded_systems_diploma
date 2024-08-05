#include<stdio.h>

int main(){
    char c=0;
    printf("Enter a character: ");
    scanf("%c", &c);
    if((c>='A' | c>='a') && (c<='Z' | c<='z')){
        printf("%c is an alphabet", c);
    }else{
        printf("%c is not an alphabet", c);
    }
}
