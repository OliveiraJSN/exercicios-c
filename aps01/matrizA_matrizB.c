#include <stdio.h>

int main(){
    int matrizA[5][3];
    int matrizB[5][3];
    int matrizSoma[5][3];
    int i, j;

    printf("\n--- Digite a Matriz A ---\n");

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 3; j ++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\n--- Digite a Matriz B ---\n");

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 3; j ++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("\n--- Matriz A --- \n");

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 3; j ++){
            printf("[%d] ", matrizA[i][j]);
        }  
        printf("\n");
    }

    printf("\n--- Matriz B --- \n");

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 3; j ++){
            printf("[%d] ", matrizB[i][j]);
        }  
        printf("\n");
    }

    printf("\n--- Matriz Soma --- \n");

    for(i = 0; i < 5; i ++){
        for(j = 0; j < 3; j ++){
            printf("[%d] ", matrizA[i][j] + matrizB[i][j]);
        }  
        printf("\n");
    }

    return 0;
}