#include <stdio.h>
#include "../bibliotecas/matematica/divisao/divisao.h"
#include "../bibliotecas/matematica/multiplicacao/multiplicacao.h"
#include "../bibliotecas/matematica/soma/soma.h"
#include "../bibliotecas/matematica/subtracao/subtracao.h"

int main(){
    int a, b;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = somar(a, b);
    subtracao = subtrair(a, b);
    multiplicacao = multiplicar(a, b);

    printf("A soma de %d e %d e: %d\n", a, b, soma);
    printf("A subtracao de %d e %d é : %d\n", a, b, subtracao);
    printf("A multiplicao de %d e %d é : %d\n", a, b, multiplicacao);

    if(b == 0){
        printf("A divisao de %d e %d é: impossivel (divisao por zero).\n", a, b);
    } else{
        divisao = dividir(a, b);
        printf("A divisao de %d e %d é : %.2f\n", a, b, divisao);
    }

    return 0;
}