#include <stdio.h>

int main(){
    int a, b, soma;

    int *p1, *p2, *psoma;

    p1 = &a;
    p2 = &b;
    psoma = &soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", p1);

    printf("Digite o segundo numero: ");
    scanf("%d", p2);

    *psoma = *p1 + *p2;

    printf("A soma de %d + %d é igual a: %d\n", *p1, *p2, *psoma);

    return 0;
}
