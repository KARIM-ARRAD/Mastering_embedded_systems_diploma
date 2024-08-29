#include<stdio.h>

int main(){
    float a=0, b=0;
    printf("Enter a number: ");
    scanf("%f", &a);
    if(a==0){
        printf("%.2f is null", a);
    }else if(a>0){
        printf("%.2f is positive", a);
    }else{
        printf("%.2f is negative", a);
    }
}
