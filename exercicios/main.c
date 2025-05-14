#include <stdio.h>
#include "somarArray.h"

int main(){
    int tamanho;
    int soma = 0;

    printf("Digite o tamanho da sua lista: ");
    scanf("%d", &tamanho);

    int lista[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d numero da sua lista: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("A soma da sua lista e igual a: %d", somarArray(lista, tamanho));

    return 0;
}