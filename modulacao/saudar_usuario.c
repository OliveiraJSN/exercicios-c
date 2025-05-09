#include <stdio.h>
#include <string.h>

void saudarUsuario(char nome[50]){

    printf("Digite o seu nome: \n");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

}

int main(){
    char nome[50];

    saudarUsuario(nome);

    printf("Ola, %s! Seja bem-vindo ao sistema.", nome);

    return 0;
}