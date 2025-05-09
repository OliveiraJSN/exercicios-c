#include <stdio.h>
#include "../bibliotecas/matematica/divisao/divisao.h"
#include "../bibliotecas/matematica/multiplicacao/multiplicacao.h"
#include "../bibliotecas/matematica/soma/soma.h"
#include "../bibliotecas/matematica/subtracao/subtracao.h"

int main(){
    int opcao;
    int a, b;

    do {
        printf("\n--- CALCULADORA INTERATIVA ---\n");
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        printf("\nEscolha uma operação:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Resultado: %d + %d = %d\n", a, b, somar(a, b));
                break;
            case 2:
                printf("Resultado: %d - %d = %d\n", a, b, subtrair(a, b));
                break;
            case 3:
                printf("Resultado: %d * %d = %d\n", a, b, multiplicar(a, b));
                break;
            case 4:
                if (b == 0) {
                    printf("Erro: divisao por zero nao permitida.\n");
                } else {
                    printf("Resultado: %d / %d = %.2f\n", a, b, dividir(a, b));
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while(opcao != 5);

    return 0;
}
