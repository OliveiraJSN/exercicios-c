#include <stdio.h>

struct Pessoa { //
    char nome[50];
    int idade;
    float altura;
    char cidade[50];
};

void exibirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    printf("Cidade: %s\n", p.cidade);
}

int main() {
    struct Pessoa p[3];

    for (int i = 0; i < 3; i++) {
        printf("\n--- Cadastro da Pessoa %d ---\n", i + 1);

        printf("Nome: ");
        scanf("%s", p[i].nome);

        printf("Idade: ");
        scanf("%d", &p[i].idade);

        printf("Altura: ");
        scanf("%f", &p[i].altura);

        printf("Cidade: ");
        scanf("%s", p[i].cidade);
    }

    printf("\n--- Lista de Pessoas ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nPessoa %d:\n", i + 1);
        exibirPessoa(p[i]);
    }

    return 0;
}
