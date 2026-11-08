#include <stdio.h>

int main(){
	
	int soma, i;
	
	soma = 0;
	
	for(i=1; i<=10; i++){
		soma = soma + i;	
	}
	
	printf("Soma: %d.\n", soma);
	
	return 0;
}
