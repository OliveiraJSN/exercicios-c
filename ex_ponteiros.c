#include <stdio.h>

int main(){
    int a, b, c;
    int *n1, *n2, *n3;
    
    n1 = &a;
    n2 = &b;
    n3 = &c;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    
    if(*n1 > *n2 && *n1 > *n3){
        printf("O valor maior é: %d", *n1);
    } else if(*n2 > *n3){
        printf("O valor maior é: %d", *n2);
    } else{
        printf("O valor maior é: %d", *n3);
    }
    
    return 0;
}