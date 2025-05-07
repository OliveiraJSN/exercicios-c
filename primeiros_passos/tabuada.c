#include <stdio.h>

int main() {
    int numero;
    int i;

    printf("Digite um numero para saber sua tabuada de 1 a 10: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
