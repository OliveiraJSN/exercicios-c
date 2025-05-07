#include <stdio.h>

int dobro(int a) {
    return a * 2;
}

int main() {
    int resultado = dobro(2);
    printf("O dobro de %d é: %d\n", 2, resultado);
    return 0;
}
