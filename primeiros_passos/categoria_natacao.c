#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 5) {
        printf("Idade fora da faixa de classificacao.\n");
    } else if (idade >= 5 && idade <= 7) {
        printf("Infantil A\n");
    } else if (idade > 7 && idade <= 10) {
        printf("Infantil B\n");
    } else if (idade > 10 && idade <= 13) {
        printf("Juvenil A\n");
    } else if (idade > 13 && idade <= 17) {
        printf("Juvenil B\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else {
        printf("Idade informada invalida!\n");
    }

    return 0;
}
