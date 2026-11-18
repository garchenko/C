// Utilização de Estruturas (struct) para Armazenar Dados de Alunos em C

#include <stdio.h>
#include <stdlib.h>
	
struct aluno {
	int v_nmat; //numero da matricula
	float v_nota[3]; //notas
	float v_media; //media
};
	
int main() {
	struct aluno Milton; //declara uma variavel do tipo struct
	Milton.v_nmat = 120;
	Milton.v_nota[0]=8.5;
	Milton.v_nota[1]=7.2;
	Milton.v_nota[2]=5.4;
	Milton.v_media=(Milton.v_nota[0]+Milton.v_nota[1]+Milton.v_nota[2])/3.0;
	printf("Matricula:%d\n", Milton.v_nmat);
	printf("Media: %.2f\n", Milton.v_media);
	system("pause");
	return(0);
}