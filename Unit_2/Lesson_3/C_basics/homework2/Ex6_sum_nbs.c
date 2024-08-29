#include<stdio.h>

int main(){
    int a=0,i=0,sum=0;
    printf("Enter value of a: ");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        sum+=i;
    }
    printf("Sum of numbers until %d is: %d", a, sum);
    }
