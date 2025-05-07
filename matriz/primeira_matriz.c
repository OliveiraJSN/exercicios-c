#include <stdio.h>

int main(){
    int matriz[2][2];
    int i, j;
    
    for(i = 0; i < 2; i ++){
        for(j = 0; j < 2; j++){
            printf("Digite o valor da posição [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz digitada: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}