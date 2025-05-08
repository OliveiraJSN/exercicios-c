#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int i;

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);

    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", nome[i]);
    }

    return 0;
}