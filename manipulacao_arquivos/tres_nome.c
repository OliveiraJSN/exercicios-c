#include <stdio.h>

int main() {
    char nomes[3][50];

    printf("--Digite tres nomes--\n");

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d nome: ", i + 1);
        scanf("%s", nomes[i]);
    }

    FILE *arquivo = fopen("nomes.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(arquivo, "%s\n", nomes[i]);
    }

    fclose(arquivo);
    printf("\n--- Arquivo salvo com sucesso em nomes.txt ---\n");

    // Leitura
    arquivo = fopen("nomes.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("\n--- Nomes salvos no arquivo ---\n");

    for (int i = 0; i < 3; i++) {
        fgets(nomes[i], 50, arquivo);
        printf("Nome %d: %s", i + 1, nomes[i]);
    }

    fclose(arquivo);

    return 0;
}
