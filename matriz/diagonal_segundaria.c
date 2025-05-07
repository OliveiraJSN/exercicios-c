#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int soma = 0;
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            printf("Digite o valor para incluir na posição: [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            if(i + j == 2){
                soma = soma + matriz[i][j];
            }
        }
    }
    
    printf("Matriz: \n");
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma da matriz invertida é igual a: %d", soma);
    
    return 0;
}