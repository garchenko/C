#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ponteiro;
	ponteiro = (int*) malloc(5 * sizeof(int)); //Aloca memoria para 5 inteiros
	
	if (ponteiro != NULL){ // Verifica se a alocacao foi bem-sucedida
		int i;
		for (i = 0; i < 5; i++){
			ponteiro[i] = i +1; // Inicializa os valores manualmente
		}
		
		for (i = 0; i < 5; i++){
			printf("%d ", ponteiro[i]);
		}
		
		free(ponteiro); // Libera a memoria
	} else {
		printf("Erro na alocacao de memoria.\n");
	}
	
	return 0;	
}
