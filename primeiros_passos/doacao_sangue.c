#include <stdio.h>

int main() {
    int idade;
    float peso;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    if (idade >= 16 && idade <= 69 && peso >= 50) {
        printf("Apto para doar sangue.\n");
    } else {
        printf("Não apto para doar sangue.\n");
    }

    return 0;
}
