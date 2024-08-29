#include<stdio.h>

int main(){
    int i=0,a=0;
    float f=1;
    printf("Enter value of a: ");
    scanf("%d", &a);
    if(a==0){
        printf("Factoral of %d is 0", a);
    }else if (a<0){
        printf("Factorial of a negative number doesn't exist !");
    }else{
        for(i=2;i<=a;i++){
        f=f*i;
        }
        printf("Factorial of %d: %.2f", a, f);
    }
}
