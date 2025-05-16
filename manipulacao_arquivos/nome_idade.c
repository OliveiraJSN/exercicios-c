#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    // ESCREVENDO NO ARQUIVO
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Idade: %d\n", idade);

    fclose(arquivo);
    printf("\nDados gravados com sucesso!\n");

    // LER O ARQUIVO
    arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fscanf(arquivo, "Nome: %s\n", nome);
    fscanf(arquivo, "Idade: %d\n", &idade);

    printf("\n--- Dados lidos do arquivo ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    fclose(arquivo);
    return 0;
}
