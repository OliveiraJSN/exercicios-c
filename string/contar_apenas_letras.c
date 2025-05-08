#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    int i;
    int letras = 0;

    printf("Digite o seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);

    for(i = 0; i < tamanho ; i++) {
        if (((nome[i] >= 'A' && nome[i] <= 'Z') || (nome[i] >= 'a' && nome[i] <= 'z'))) {
            letras++;
        }
        
    }

    printf("O nome tem %d letras\n", letras);

    return 0;
}
