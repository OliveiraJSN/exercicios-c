#include <stdio.h>

int main(){
    int numeros[10];
    int par = 0, impar = 0;
    int i;
    
    for(i = 0; i < 10; i++){
        printf("Digite o %d º numero: ", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0){
            par = par + 1;
        } else{
            impar = impar + 1;
        }
    }
    
    printf("Quantidade de pares: %d\n", par);
    printf("Quantidade de impares: %d\n", impar);

    return 0;
    
}