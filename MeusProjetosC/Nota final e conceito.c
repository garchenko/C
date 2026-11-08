#include <stdio.h>

int main(){
	
	float tl, av, ex, media;
	
	printf("Insira a nota do trabalho de laboratorio: ");
	scanf("%f", &tl);
	printf("\nInsira a nota da Avaliacao semestral: ");
	scanf("%f", &av);
	printf("\nInsira a nota do Exame final: ");
	scanf("%f", &ex);
	
	if (tl <0 || tl > 10 || av < 0 || av > 10 || ex < 0 || ex >10){
		printf("\nErro: as notas tem que ser entre 0 e 10, digite novamente os valores");	
	} else {
		media = ((tl * 2.0) + (av * 3.0) + (ex * 5.0)) / 10.0;
		printf("\nMedia ponderada: %.2f", media);

		if (media >= 8.0) {
    		printf("\nSua media vale um A.");
		} 
		else if (media >= 7.0) {
    		printf("\nSua media vale um B.");
		} 
		else if (media >= 6.0) {
    		printf("\nSua media vale um C.");
		} 
		else if (media >= 5.0) {
    		printf("\nSua media vale um D.");
		} 
		else {
    		printf("\nSua media vale um E.");
		}
	}
	return 0;
}
