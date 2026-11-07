#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ponteiro;
	ponteiro = (int*) calloc(5, sizeof(int)); //Aloca memoria para 5 inteiros, inicializados
	
	if (ponteiro != NULL){ // Verifica se a alocacao foi bem-sucedida
		int i;
		for (i = 0; i < 5; i++){
			printf("%d ", ponteiro[i]); //Exibe os valores iniciais (todos devem ser zero)
		}
		
		free(ponteiro); // Libera a memoria
	} else {
		printf("Erro na alocacao de memoria.\n");
	}
	
	return 0;	
}
