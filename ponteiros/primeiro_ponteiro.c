void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("Antes da troca: x = %d, y = %d\n", x, y);

    trocar(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}
