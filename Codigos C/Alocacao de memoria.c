#include <stdio.h>
#include <stdlib.h>

int main(){
	//Definicao de variaveis do tipo ponteiro
	int numero = 10;
	int *ponteiroInt = &numero; // Ponteiro para um inteiro
	
	// Exibindo o valor e o endereço da variavel 'numero' usando ponteiros
	printf("Valor de numero: %d\n", numero);
	printf("Endereco de numero: %p\n", ponteiroInt);
	printf("Valor apontado por ponteiroInt: %d\n", *ponteiroInt);
	
	// Alterando o valor da variavel 'numero' atraves do ponteiro
	*ponteiroInt = 20;
	printf("Novo valor de numero apos modificacao pelo ponteiro: %d\n", numero);
	
	// Caracteristicas especificas dos ponteiros
	// Alocacao dinamica de memoria com malloc
	int *ponteiroDinamico;
	ponteiroDinamico = (int*) malloc(sizeof(int)); // Aloca memoria para um inteiro
	
	if (ponteiroDinamico == NULL) {
		printf("Erro ao alocar memoria!\n");
		return 1; // Sai do progama se a alocacao falhar
	}
	
	// Inicializando o valor alocado dinamicamente e exibindo
	*ponteiroDinamico = 50;
	printf("Valor armazenado na memoria alocada dinamicamente: %d\n", *ponteiroDinamico);
	
	// Uso correto dos ponteiros na progamacao
	// Exemplo de uso seguro de ponteiro com verificacao e liberacao de memoria
	free(ponteiroDinamico); // Libera a memoria alocada
	ponteiroDinamico = NULL; // Evita acessos acidentais, tornando o ponteiro invalido
	
	// Testando o ponteiro apos liberar a memoria
	if (ponteiroDinamico == NULL) {
		printf("Memoria foi liberada corretamente e o ponteiro esta invalidado.\n");
	}
	return 0;
}
