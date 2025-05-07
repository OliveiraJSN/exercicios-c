#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int soma = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor na posição [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }
    
    printf("Matriz: \n");
    for(i = 0; i< 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d][%d]: %d", i, j, matriz[i][j]);
        }
        printf("\n");
    } 
    
    
    printf("Soma total: %d", soma);

    return 0;
}