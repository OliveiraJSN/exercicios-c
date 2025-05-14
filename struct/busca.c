#include <stdio.h>
#include <string.h>

struct Alunos{
    char nome[50];
    float nota1, nota2;
};

float calcularMedia(float nota1, float nota2){
    return (nota1 + nota2) / 2;
}

int main(){
    int quantidade;
    char pesquisa[50];
    int encontrado = 0;

    printf("\n --- Cadastro de alunos --- \n");

    printf("Digite quantos alunos deseja cadastrar: ");
    scanf("%d", &quantidade);

    struct Alunos aluno[quantidade];

    for(int i = 0; i < quantidade; i ++){
        printf("\n --- Aluno %d --- \n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[i].nota1);

        printf("Digite a sugunda nota: ");
        scanf("%f", &aluno[i].nota2);
    
}

    printf("Digite o nome do aluno que deseja saber a media: ");
    scanf("%s", pesquisa);
    
    for(int i = 0; i < quantidade; i ++){
        if (strcmp(pesquisa, aluno[i].nome) == 0){
            printf("Aluno %s tem a media de: %.2f\n", aluno[i].nome, calcularMedia(aluno[i].nota1, aluno[i].nota2));
            encontrado = 1;
        }
    }

    if(!encontrado){
            printf("Aluno nao encontrado!\n");
        }

    return 0;
}