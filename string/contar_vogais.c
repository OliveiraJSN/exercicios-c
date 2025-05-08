#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    int i;
    int vogais = 0;

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);

    for(i = 0; i < tamanho; i++){
        if(nome[i] == 'a' || nome[i] == 'A' ||
           nome[i] == 'e' || nome[i] == 'E' ||
           nome[i] == 'i' || nome[i] == 'I' ||
           nome[i] == 'o' || nome[i] == 'O' ||
           nome[i] == 'u' || nome[i] == 'U'){
            vogais ++;
        }
    }

    printf("O nome possui %d vogais!\n", vogais);

    return 0;
}