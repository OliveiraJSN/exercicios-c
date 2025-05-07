#include <stdio.h>

int main() {
    int numero;
    int i;
    int soma = 0;

    printf("Digite um valor que deseja saber a soma: ");
    scanf("%d", &numero);
    
    for(i = 1; i <= numero; i++) {
        soma = soma + i;
    }

    printf("A soma dos valores de 1 ate %d é igual a: %d\n", numero, soma);

    return 0;
}
