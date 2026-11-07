#include <stdio.h>
 
struct Contato {
    char nome[50];
    int idade;
    char telefone[15];
};
 
int main() {
 
    // Lista (vetor) de 3 contatos
    struct Contato agenda[3] = {
        {"Ana", 25, "99999-1111"},
        {"Carlos", 30, "98888-2222"},
        {"Beatriz", 22, "97777-3333"}
    };
 
    int i;
 
    // Percorrendo a lista
    for (i = 0; i < 3; i++) {
        printf("Nome: %s | Idade: %d | Telefone: %s\n",
               agenda[i].nome,
               agenda[i].idade,
               agenda[i].telefone);
    }
 
    return 0;
}
