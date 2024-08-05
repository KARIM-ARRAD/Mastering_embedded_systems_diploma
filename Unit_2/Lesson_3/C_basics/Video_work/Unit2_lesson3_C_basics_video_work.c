#include<stdio.h>
#include<stdlib.h>
int main(){
	int n=0, i=0;
	while(n!=10){
		for(i=n;i<10;i++){
			printf("%d ",i);
		}
		printf("\n");
		n++;
	}
}

