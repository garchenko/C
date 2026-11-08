#include <stdio.h>

float calclucrodist(float p_fab, float por_dist){
	return p_fab * por_dist / 100;
}

float calcimpostos(float p_fab, float por_imp){
	return p_fab * por_imp / 100;
}

float calcprecofinal(float p_fab, float val_dist, float val_imp){
	return p_fab + val_dist + val_imp;
}

int main(){
	
	float pre_fab, por_dis, por_imp, luc_dis, imp, val_fin;
	
	printf("Insira o preco de fabrica:\n");
	scanf("%f", &pre_fab);
	printf("Insira o percentual de lucro do distribuidor:\n");
	scanf("%f", &por_dis);
	printf("Insira o percentual de imposto:\n");
	scanf("%f", &por_imp);
	
	luc_dis = calclucrodist(pre_fab, por_dis);
	imp = calcimpostos(pre_fab, por_imp);
	val_fin = calcprecofinal(pre_fab, luc_dis, imp);
	
	printf("Lucro do distribuidor: R$ %2.f.\n", luc_dis);
	printf("Impostos: R$ %2.f.\n", imp);
	printf("Valor final: R$ %2.f.\n", val_fin);
	
	return 0;
}
