#include <stdio.h>

int main(){
    int numeros[5];
    int i;
    int maior, menor;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for(i = 1; i < 5; i++){ 
        if(numeros[i] > maior){
            maior = numeros[i];
        }

        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
