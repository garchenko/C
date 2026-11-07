#include <stdio.h>

int main(){
	int idade;
	
	printf("Qual a sua idade?\n");
	scanf("%d", &idade);
	
	if(idade > 50){
		printf("Voce ainda e jovem!\n");
	}
	else{
		printf("Voce esta ficando velho!\n");
	}
	
	system("pause");
	
	return 0;
}
