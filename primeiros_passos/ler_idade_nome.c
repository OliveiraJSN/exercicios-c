#include <stdio.h>

int main() {
    char nome[50];  // Array de 50 caracteres para armazenar o nome
    int idade;
    float altura;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Olá %s! Você tem %d anos e mede %.2f metros.\n", nome, idade, altura);

    return 0;
}
