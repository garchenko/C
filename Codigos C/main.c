#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, soma;
	
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n1);
	printf("Informe o segundo numero:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro numero:\n");
	scanf("%d", &n3);
	printf("Informe o quarto numero:\n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("A soma entre os 4 numeros sao: %d\n", soma);
	
	return 0;
}
