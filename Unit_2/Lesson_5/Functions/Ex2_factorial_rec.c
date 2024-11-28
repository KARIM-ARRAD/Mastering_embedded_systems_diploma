#include <stdio.h>

int Factorial(int num);

int main(){
	int Num, Fact;

	printf("Enter a number : ");
	scanf("%d",&Num);

	Fact = Factorial(Num);
	printf("Factorial of %d = %d", Num, Fact);

	return 0;
}

int Factorial(int num){
	int fact;
	if(num != 1){
	    fact = num*(Factorial(num-1));
	    return fact;
	}
}
