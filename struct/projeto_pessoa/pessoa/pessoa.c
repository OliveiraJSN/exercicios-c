#include <stdio.h>
#include "pessoa.h"

void exibirPessoa(struct Pessoa p){
    printf("Nome: %s \n", p.nome);
    printf("Idade: %d \n", p.idade);
    printf("Altura: %.2f \n", p.altura);
    printf("Cidade: %s \n", p.cidade);
}