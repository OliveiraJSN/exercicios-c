#include <stdio.h>

int main(){
    int numeros[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Os números digitados foram: ");
    for(i = 0; i < 5; i++){
        printf("%d ", numeros[i]);
    }

    printf("\n");
    
    return 0;
}
