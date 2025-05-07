#include <stdio.h>

int main(){
    int numeros[5];
    int i;
    int soma = 0;
    float media;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }

    media = soma / 5.0;

    printf("A soma dos valores é igual a: %d\n", soma);
    printf("A média dos valores é igual a: %.2f\n", media);

    return 0;
}
