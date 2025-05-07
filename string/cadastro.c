#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    char cidade[50];
    char profissao[50];

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a sua cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a sua profissão: ");
    fgets(profissao, 50, stdin);
    profissao[strcspn(profissao, "\n")] = '\0';    

    printf("\nPerfil cadastrado:\n");
    printf("Nome: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("Profissao: %s\n", profissao);

    return 0;
}
