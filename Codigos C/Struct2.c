#include <stdio.h>
#include <string.h>

struct Paciente {
	char nome[50];
	int idade;
	char telefone[15];
};

int main() {
	struct Paciente pacientes[3];
	int i;
	
	// Preenchendo as informações para cada pessoa
	strcpy(pacientes[0].nome, "Luciana");
	pacientes[0].idade = 40;
	strcpy(pacientes[0].telefone, "11111-2222");
	
	strcpy(pacientes[1].nome, "Lucas");
	pacientes[1].idade = 34;
	strcpy(pacientes[1].telefone, "55555-6666");
	
	strcpy(pacientes[2].nome, "Claudia");
	pacientes[2].idade = 27;
	strcpy(pacientes[2].telefone, "88888-3333");
	
	// imprimindo as informações
	for (i = 0; i< 3; i++) {
		printf("Paciente %d:\n", i + 1);
		printf("Nome: %s\n", pacientes[i].nome);
		printf("Idade: %d\n", pacientes[i].idade);
		printf("Telefone: %s\n\n", pacientes[i].telefone);
	}
	
	return 0;
}
