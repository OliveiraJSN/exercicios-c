#include <stdio.h>


int potencia(int base, int expoente) {
    int resultado = 1;
    
    for(int i = 0; i < expoente; i++){
        resultado = resultado * base;
    }
    
    return resultado;
   
}

int main() {
    int base, expoente;
    
    printf("Digite o valor da base: \n");
    scanf("%d", &base);
    
    printf("Digite o valor do expoente: \n");
    scanf("%d", &expoente);
    
    int resultado = potencia(base, expoente);
    
    printf("%d elevado a %d é: %d\n", base, expoente, resultado);
    
    
    return 0;
}