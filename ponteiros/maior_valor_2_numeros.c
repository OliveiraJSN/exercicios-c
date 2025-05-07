#include <stdio.h>

int main(){
    int a, b;
    int *n1, *n2;
    
    n1 = &a;
    n2 = &b;
    
     printf("Digite o primeiro numero: ");
     scanf("%d", &a);
     
     printf("Digite o segundo numero: ");
     scanf("%d", &b);
     
     if(*n1 > *n2){
         printf("O valor maior é: %d\n", *n1);
     } else{
         printf("O valor maior é: %d\n", *n2);
     }
     
     return 0;
}