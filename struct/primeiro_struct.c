#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    char cidade[50];
};

int main() {
    struct Pessoa pessoas[3];  // declara um vetor com 3 pessoas

    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", pessoas[i].nome); 

        printf("Idade: ");
        scanf("%d", &pessoas[i].idade);

        printf("Altura: ");
        scanf("%f", &pessoas[i].altura);

        printf("Cidade: ");
        scanf("%s", pessoas[i].cidade);
    }

    printf("\n--- Lista de Pessoas ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%d - Nome: %s, Idade: %d, Altura: %.2f, Cidade: %s\n", i + 1, pessoas[i].nome, pessoas[i].idade, pessoas[i].altura, pessoas[i].cidade);
    }

    return 0;
}
