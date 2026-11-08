#include <stdio.h>

int main(){
	
	int ant1, ant2, atual, i; 
	ant1 = 1;
	ant2 = 0;
	
	printf("Serie de Fibonacci (8 primeiros numeros):\n");
	printf("%d %d ", ant2, ant1);
	
	for(i=3; i<=8; i++){
		atual = ant1 + ant2;
		printf("%d ", atual);
		ant2 = ant1;
		ant1 = atual;	
	}
	
	return 0;
}
