#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[50];
    int tamanho;
    int i;

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    tamanho = strlen(nome);

    for(i = 0; i < tamanho ; i ++){
        nome[i] = toupper(nome[i]);
    }

    printf("O nome em maiusculo e igual: %s\n", nome);

    return 0;
}