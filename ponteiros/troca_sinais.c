#include <stdio.h>

void inverter_sinais(int *a, int *b){
    *a = *a * -1;
    *b = *b * -1;
}

int main(){
    int x, y;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    printf("Antes x = %d, y = %d \n", x, y);
    
    inverter_sinais(&x, &y);
    
    printf("Depois x = %d, y = %d \n", x, y);

    return 0;
}