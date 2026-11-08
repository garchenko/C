/*Jeremias possui um cronometro que consegue marcar o tempo apenas em segundos.
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos,
e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.*/

#include <stdio.h>

int main(){
	
	int seg, min, hr;
	
	printf("Insira o tempo em segundos:\n");
	scanf("%d", &seg);
	
	hr = seg / 3600;
	seg = seg % 3600;
	
	min = seg / 60;
	seg = seg % 60;
	
	printf("\nO tempo total e %d Horas, %d minutos, %d segundos", hr, min, seg);
	
	return 0;
}
