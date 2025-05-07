#include <stdio.h>
#include <string.h>

int main() {
    char senha[10];

    printf("Digite a senha: ");
    scanf("%s", senha);

    while (strcmp(senha, "1234") != 0) {
        printf("Senha incorreta, tente novamente: ");
        scanf("%s", senha);
    }

    printf("Acesso liberado!\n");

    return 0;
}
