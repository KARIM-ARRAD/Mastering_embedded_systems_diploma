#include <stdio.h>

int power(int base_nb , int pow_nb);

int main(){
	int base_nb, pow_nb, rslt;

	printf("Enter base number: ");
	scanf("%d", &base_nb);
	printf("Enter power number(positive number): ");
	scanf("%d", &pow_nb);

	rslt = power(base_nb , pow_nb);
	printf("%d^%d = %d", base_nb, pow_nb, rslt);

	return 0;
}

int power(int base_nb , int pow_nb){
	int Rslt;
	if(pow_nb != 0){
		rslt = (base_nb * power(base_nb , pow_nb - 1));
	}else{
		rslt = 1;
	}
	return rslt;
}
