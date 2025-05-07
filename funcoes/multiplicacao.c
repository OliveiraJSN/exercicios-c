#include <stdio.h>

int multiplicar(int a, int b){
    return a * b;
}

int main(){
    int n1;
    int n2;
    
    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    
    int resultado = multiplicar(n1, n2);
    printf("A multiplicacao de %d por %d é igual a: %d \n", n1, n2, resultado);
    
    return 0;
}