#include <stdio.h>
#include "pessoa/pessoa.h"

int main(){
    int quantidade = 0;

    printf("Digite a quantidade de pessoas que deseja cadastrar: ");
    scanf("%d", &quantidade);

    struct Pessoa p[quantidade];

    for(int i = 0; i < quantidade; i++){
        printf("\n --- Cadastro da Pessoa %d --- \n", i + 1);

        printf("Nome: ");
        scanf("%s", p[i].nome);

        printf("Idade: ");
        scanf("%d", &p[i].idade);

        printf("Altura: ");
        scanf("%f", &p[i].altura);

        printf("Cidade: ");
        scanf("%s", p[i].cidade);

    }

    printf("\n --- Lista de pessoas ---");

    for(int i = 0; i < quantidade; i ++){
        printf("\nPessoa %d: \n", i + 1);
        exibirPessoa(p[i]);
    }

    return 0;
}