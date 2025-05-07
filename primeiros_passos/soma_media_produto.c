#include <stdio.h>

int main() {
    int a, b, c;
    int soma, produto;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    soma = a + b + c;
    media = soma / 3.0;
    produto = a * b * c;

    printf("A soma dos tres numeros é: %d\n", soma);
    printf("A media dos tres numeros é: %.2f\n", media);
    printf("O produto dos tres numeros é: %d\n", produto);

    return 0;
}
