/*Faça um progama que receba o salario de um funcionario
e o percentual de aumento, calcule e mostre o valor do 
aumento e o novo salario.*/

#include <stdio.h>

int main(){
	
	float s, p, a, ns;
	
	printf("Qual o valor do seu salario atual:\nR$");
	scanf("%f", &s);
	
	printf("Qual a porcentagem de aumento?:\n");
	scanf("%f", &p);
	
	a = s * (p / 100.0);
	ns = s + a;
	
	printf("O aumento do salario foi de: \nR$%.2f\n", a);
	printf("O novo valor do salario sera: \nR$%.2f\n", ns);
	
	return 0;
}
