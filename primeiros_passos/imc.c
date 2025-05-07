#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    float peso;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    float imc;

    float imc;

    imc = peso / (altura * altura);

    printf("\nOlá %s! Você tem %d anos.\n", nome, idade);
    printf("\nO seu peso é de %.2f kg\n", peso);
    printf("\nE seu IMC é de %.2f\n", imc);




    return 0;
}
