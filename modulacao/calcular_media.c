#include <stdio.h>

float calcularMedia(float a, float b){
    float media;

    media = (a + b) / 2;

    return media;
}

int main(){
    float a, b;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    media = calcularMedia(a, b);

    printf("A media entre %.2f e %.2f e: %.2f", a, b, media);

    return 0;
}