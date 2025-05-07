#include <stdio.h>

int main() {
    int idade;
    int soma = 0;
    int quantidade = 0;

    printf("Digite uma idade (0 para parar): ");
    scanf("%d", &idade);

    while (idade != 0) {
        if (idade > 0) {
            soma += idade;
            quantidade++;
        } else {
            printf("Idade negativa ignorada.\n");
        }

        printf("Digite outra idade (0 para parar): ");
        scanf("%d", &idade);
    }

    printf("A soma das idades de %d pessoas é: %d\n", quantidade, soma);

    return 0;
}
