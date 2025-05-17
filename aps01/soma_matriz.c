#include <stdio.h>

int main(){
    int matriz[3][4];
    int i, j;
    int soma = 0;

    for(i = 0; i < 3; i ++){
        for(j = 0; j < 4; j ++){
            printf("Digite o valor da posicao [%d][%d]: ", i , j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma da matriz e igual a %d\n", soma);

    return 0;
}