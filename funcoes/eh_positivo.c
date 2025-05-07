#include <stdio.h>

int eh_positivo(int n){
    if(n > 0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int numero;
    
    printf("Digite um valor para saber se é positivo ou negativo: ");
    scanf("%d", &numero);
    
    if (numero == 0) {
        printf("O valor é zero!\n");
    } else if (eh_positivo(numero)) {
        printf("O valor é positivo!\n");
    } else {
        printf("O valor é negativo!\n");
    }
    
    return 0;
    
}