#include <stdio.h>

int valorGlobal=20; //Variavel estatica
void exibirValor(){
	printf("Valor global:%d\n", valorGlobal);
}

int main(){
	exibirValor(); //Chamada de funcao para exibir o valor global
	return 0;
}
