#include <stdio.h>

int main(){
    char frases[3][50];

    printf("Digite suas tres frases favoritas\n");
    
    for(int i = 0; i < 3; i ++){
        printf("Digite a %d frase: ", i + 1);
        fgets(frases[i], 50, stdin);
        frases[i][strcspn(frases[i], "\n")] = '\0';
    }

    FILE *arquivo = fopen("frases.txt", "w");

    if(arquivo == NULL){
        printf("Arquivo não pode ser aberto!\n");
        return 1;
    }

    for(int i = 0; i < 3; i ++){
        fprintf(arquivo,"%s", frases[i]);
    }

    fclose(arquivo);

    printf("\n ---- Frases salvas com sucesso ---- \n");

    printf("\n");

    arquivo = fopen("frases.txt", "r");

    for(int i = 0; i < 3; i ++){
        fgets(frases[i], 50, arquivo);
        printf("Frase %d = %s\n", i + 1, frases[i]);
    }

    printf("\n --- Leitura feita com sucesso --- \n");

    fclose(arquivo);

    return 0;
}