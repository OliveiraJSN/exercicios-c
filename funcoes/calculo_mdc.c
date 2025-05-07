#include <stdio.h>

int mdc(int a, int b){
    while (b != 0){
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main(){
    int n1, n2;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);
    
    int resultado = mdc(n1, n2);
    
    printf("O MDC entre %d e %d é: %d", n1, n2, resultado);
    
    return 0;
}