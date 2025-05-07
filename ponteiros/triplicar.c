#include <stdio.h>

void triplicar(int *n){
    *n = *n * 3;
}

int main(){
    int a;
    
    printf("Digite um valor: ");
    scanf("%d", &a);
    
    printf("Antes: %d\n", a);
    
    triplicar(&a);
    
    printf("Depois: %d\n", a);
    
    return 0;
}
