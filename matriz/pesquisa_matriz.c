#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int codigo;
    int encontrado = 0;
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            printf("Digite o codigo do produto que deseja colcoar na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nQual codigo deseja saber as posicoes: ");
    scanf("%d", &codigo);

    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j ++){
            if(codigo == matriz[i][j]){
                printf("Codigo encontrado na posicao: [%d][%d] \n", i, j);
                encontrado = 1;
            }
        }
    }

    if(!encontrado){
        printf("Codigo nao encontrado na raiz!\n");

    }

    return 0;
}