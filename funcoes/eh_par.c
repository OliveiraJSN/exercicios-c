#include <stdio.h>

int eh_par(int a) {
    if (a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int valor;
    
    printf("Digite um valor para saber se é par ou ímpar: ");
    scanf("%d", &valor);
    
    int resultado = eh_par(valor);
    
    if (resultado) {
        printf("É par!\n");
    } else {
        printf("É ímpar!\n");
    }

    return 0;
}
