#include <stdio.h>

float calcsalrec(float n_hr, float s_min){
	float hr_tb, s_brt, imp, s_rec;
	hr_tb =  s_min / 2.0;
	s_brt = n_hr * hr_tb;
	imp = s_brt * 3 / 100;
	s_rec = s_brt - imp;
	return s_rec;
}

int main(){
	
	float horas_trab, sal_min, sal_rec;
	
	printf("Insira o numero de horas trabalhadas:\n");
	scanf("%f", &horas_trab);
	printf("Insira o valor do salario minimo:\n");
	scanf("%f", &sal_min);
	
	sal_rec = calcsalrec(horas_trab, sal_min);
	
	printf("Salario a receber: R$ %.2f.\n", sal_rec);
	
	return 0;
}
