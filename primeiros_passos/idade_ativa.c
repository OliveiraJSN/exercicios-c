#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 18 || idade > 65) {
        printf("Com %d anos, você está fora da idade ativa.\n", idade);
    } else {
        printf("Com %d anos, você está na idade ativa.\n", idade);
    }

    return 0;
}
