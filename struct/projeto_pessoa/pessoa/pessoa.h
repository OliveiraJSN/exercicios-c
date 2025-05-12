#ifndef PESSOA_H
#define PESSOA_H

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    char cidade[50];
};

void exibirPessoa(struct Pessoa p);

#endif
