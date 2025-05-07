#include <stdio.h>

int main(){
    int matriz[3][3];
    int soma = 0;
    int i, j;
    int escolha;
    int posicao;
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j ++){
            printf("Digite o valor da posição [%d][%d]\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite 1 para somar coluna, ou 2 para somar linha: ");
    scanf("%d", &escolha);
    
    if(escolha == 1){
        printf("Qual coluna deseja somar? (0 a 2): \n");
        scanf("%d", &posicao);
        
        for(i = 0; i < 3; i ++){
            soma = soma + matriz[i][posicao];
        }
        
        
    } else if(escolha == 2){
        printf("Qual linha deseja somar? (0 a 2): \n");
        scanf("%d", &posicao);
        
        for(j = 0; j < 3; j ++){
            soma = soma + matriz[posicao][j];
            }
            
        } else{
            printf("Numero informado invalido!");
            return 1;
        
    
    }
    
    if(escolha == 1){
        printf("A soma da coluna %d é igual a: %d", posicao, soma);
    } else {
        printf("A soma da linha %d é igual a: %d", posicao, soma);
    }
    
    return 0;
}