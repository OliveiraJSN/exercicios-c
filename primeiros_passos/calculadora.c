#include <stdio.h>

int main() {
    int a, b;
    char operador;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o operador logico (+, -, *, /): ");
    scanf(" %c", &operador);

    if (operador == '+') {
        resultado = a + b;
    } else if (operador == '-') {
        resultado = a - b;
    } else if (operador == '*') {
        resultado = a * b;
    } else if (operador == '/') {
        resultado = a / b;
    } else {
        printf("Operador informado nao é valido!\n");
        return 1;
    }

    printf("O resultado é igual a: %d\n", resultado);

    return 0;
}
