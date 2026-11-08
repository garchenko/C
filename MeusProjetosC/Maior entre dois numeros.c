/*Faça um progama que receba dois numeros e mostre o maior deles.
Caso eles sejam iguais, deve-se mostrar a mensagem "Os numeros são iguais".*/

#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero:\n");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("Maior numero:\n%d", num1);
	}
	else if (num2 > num1){			
		printf("Maior numero:\n%d", num2);
	}
	else {
		printf("Os numeros sao iguais.");		
	}
	return 0;
}
