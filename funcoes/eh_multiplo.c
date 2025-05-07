#include <stdio.h>

int eh_multiplo(int a, int b){
    if(a % b == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    
    int n1, n2;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);
    
    if(eh_multiplo(n1, n2)){
        printf("%d é multiplo de %d!\n", n1, n2);
    } else{
        printf("%d não é multiplo de %d! \n", n1, n2);
    }
    
    return 0;
    
}