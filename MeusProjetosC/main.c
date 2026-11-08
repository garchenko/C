#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    // Declarar as variáveis para os 4 números e a soma e a media
    int n1, n2, n3, n4, soma;
    float media;

    // Entrada de dados
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    printf("Informe o quarto numero: ");
    scanf("%d", &n4);

    // Processamento: calcular a soma
    soma = n1 + n2 + n3 + n4;
	//Processamento da media
	media = soma / 4;
	
    // Saída de dados
    printf("\nResultado da soma: %d\n", soma);
    printf("\nResultado da media entre os numeros: %.2f\n", media);

    return 0;
}
