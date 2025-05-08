#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];


    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);
    
    printf("O nome digitado tem %d caracteres.\n", tamanho);

    return 0;
}