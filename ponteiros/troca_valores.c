#include <stdio.h>

int main(){
    int a, b, temp;
    int *n1, *n2;

    n1 = &a;
    n2 = &b;

    printf("Digite o primeiro numero: ");
    scanf("%d", n1);

    printf("Digite o segundo numero: ");
    scanf("%d", n2);

    printf("Antes da troca: a = %d, b = %d\n", *n1, *n2);

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    printf("Depois da troca: a = %d, b = %d\n", *n1, *n2);

    return 0;
}
