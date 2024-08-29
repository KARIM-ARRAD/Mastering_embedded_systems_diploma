#include<stdio.h>

int main(){
    float a=0, b=0;
    char op;
    printf("Enter value of a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter +, -, * or / : ");
    scanf(" %c", &op);
    switch(op){
        case '+':
        printf("%.2f + %.2f = %.2f", a, b, a+b);
        break;
        case '-':
        printf("%.2f - %.2f = %.2f", a, b, a-b);
        break;
        case '*':
        printf("%.2f * %.2f = %.2f", a, b, a*b);
        break;
        case '/':
        printf("%.2f / %.2f = %.2f", a, b, a/b);
        break;
        default :
        printf("Choose not correct");
        break;
    }
}