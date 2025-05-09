#include <stdio.h>
#include "../bibliotecas/matematica/primo/primo.h"
#include "../bibliotecas/matematica/par/par.h"

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(eh_par(numero)){
        printf("%d e par!\n", numero);
    } else{
        printf("%d e e impar!\n", numero);
    }

    if(eh_primo(numero)){
        printf("%d e primo!\n", numero);
    } else{
        printf("%d nao e primo!\n", numero);
    }
    
    return 0;
}