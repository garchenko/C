#include <stdio.h>

int main(){
	int numero = 10; //Variavel normal
	int *ponteiro; //Declaracao de ponteiro
	
	ponteiro = &numero; //O ponteiro armazena o endereco da variavel 'numero'
	
	printf("Valor de numero:%d\n", numero);
	printf("Endereco de numero:%p\n", ponteiro);
	printf("Valor apontado por ponteiro:%d\n", *ponteiro);
	
	return 0;
}
