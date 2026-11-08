#include <stdio.h>

void calckw(float v_sal, float q_kw, float *v_kw, float *v_reais, float *v_desc){
	*v_kw = v_sal / 1000;
	*v_reais = *v_kw * q_kw;
	*v_desc = *v_reais * 0.85;
}

int main(){
	
	float val_sal, qnt_kw, val_kw, val_reais, val_desc;
	
	printf("Insira o valor do salario minimo:\n");
	scanf("%f", &val_sal);
	printf("Insira a quantidade de KW gastos:\n");
	scanf("%f", &qnt_kw);
	
	//invocar procedimento
	calckw(val_sal, qnt_kw, &val_kw, &val_reais, &val_desc);
	
	printf("Valor de 1 KW (em R$): %.2f.\n", val_kw);
	printf("Valor a ser pago pela residencia (em R$): %.2f.\n", val_reais);
	printf("Valor com desconto (em R$): %.2f.\n", val_desc);
	
	return 0;
}
