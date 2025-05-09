#include <stdio.h>
#include "primo.h"

int main(){
    int numero;
    printf("Digite um nemero: ");
    scanf("%d", &numero);

    if(eh_primo(numero)){
        printf("%d e primo.\n", numero);
    } else {
        printf("%d nao e primo.\n", numero);
    }

    return 0;
}
