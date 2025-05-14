int somarArray(int lista[], int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i ++){
        soma += lista[i];
    }
    return soma;
}