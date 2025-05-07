#include <stdio.h>

// Corrigido para tipo void, pois não há retorno
void zerar(int *n1, int *n2){
    *n1 = 0;
    *n2 = 0;
}

int main(){
    int x, y;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    printf("Antes x = %d, y = %d\n", x, y);
    
    zerar(&x, &y);
    
    printf("Depois x = %d, y = %d\n", x, y);
    
    return 0;
}
