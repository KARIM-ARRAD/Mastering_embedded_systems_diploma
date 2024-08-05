#include<stdio.h>

int main(){
    int a=0, b=0, c=0;
    printf("Enter three integers: ");
    scanf("%d %d %d",  &a, &b, &c);
    if(a>b){
        if(a>c){
            printf("%d is the largest number", a);
        }else{
            printf("%d is the largest number", c);
        }
    }else{
        if(b>c){
            printf("%d is the largest number", b);
        }else{
            printf("%d is the largest number", c);
        }
    }
}
