#include <stdio.h>

int main(){
    char items[5][50];

    printf("--- Lista de compras ---\n");

    for(int i = 0; i < 5; i ++){
        printf("Digite o %d item da lista: ", i + 1);
        scanf("%s", items[i]);
    }

    FILE *arquivo = fopen("compras.txt", "w");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    for(int i = 0; i < 5; i ++){
        fprintf(arquivo, "Item %d: %s\n", i + 1, items[i]);
    }

    fclose(arquivo);

    printf("\nArquivo salvo com sucesso!\n");

    arquivo = fopen("compras.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("\n --- Itens salvos com sucesso --- \n");
    for(int i = 0; i < 5; i ++){
        fgets(items[i], 50, arquivo);
        printf("Item %d = %s", i + 1, items[i]);
    }

    fclose(arquivo);

    return 0;
}