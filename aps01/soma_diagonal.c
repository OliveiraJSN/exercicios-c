#include <stdio.h>

int main(){
    int matriz[5][5];
    int soma = 0;
    int i, j;

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 5; j ++){
            printf("Digite o valor da posicao [%d][%d] :", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i ++){
        soma += matriz[i][i];
    }

    printf("A soma da diagonal principal e : %d", soma);

    return 0;
}