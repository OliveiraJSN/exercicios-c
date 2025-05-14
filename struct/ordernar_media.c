#include <stdio.h>
#include <string.h>

struct Alunos {
    char nome[50];
    float nota1, nota2;
    float media;
};

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    int quantidade, i, j;

    printf("--- Cadastro de alunos ---\n");

    printf("Digite quantos alunos deseja cadastrar: ");
    scanf("%d", &quantidade);

    struct Alunos aluno[quantidade], temp;

    for(i = 0; i < quantidade; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);

        printf("Digite a primeira nota: ");
        scanf("%f", &aluno[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &aluno[i].nota2);

        aluno[i].media = calcularMedia(aluno[i].nota1, aluno[i].nota2);
    }

    for(i = 0; i < quantidade - 1; i++) {
        for(j = 0; j < quantidade - 1 - i; j++) {
            if(aluno[j].media < aluno[j + 1].media) {
                temp = aluno[j];
                aluno[j] = aluno[j + 1];
                aluno[j + 1] = temp;
            }
        }
    }

    printf("\n--- Alunos ordenados por media (maior para menor) ---\n");
    for(i = 0; i < quantidade; i++) {
        printf("Nome: %s | Media: %.2f\n", aluno[i].nome, aluno[i].media);
    }

    return 0;
}
