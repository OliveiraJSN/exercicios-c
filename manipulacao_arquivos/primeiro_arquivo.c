#include <stdio.h> //inclusao de biblioteca

struct Alunos{ //criação do struct Alunos
    char nome[50]; //vetor de caracter nome
    float nota1, nota2; //variaveis do tipo float nota1 e nota2
    float media; //variavel do tipo float com nome de media
};

float calcularMedia(float nota1,float nota2){ //ciração da função calcular media com os valores de nota1 e nota2
    return (nota1 + nota2) / 2; //retorno da meida
}

int main(){ //inicio do programa
    int quantidade, i, j; //declaração das variaveis quantidade, i e j;
    float media; //declaração da variavel media

    printf("--Cadastro de alunos!--"); //mostra em tela a mensagem

    printf("\nDigite quantos alunos deseja cadastrar: "); //mostra em tela a mensagem e solicita para que o usuario digite
    scanf("%d", &quantidade); //pega o valor digitedo pelo usuario e vincula no endereço de quantidade

    struct Alunos aluno[quantidade], temp; //da inicio no struct Alunos com aluno como parametro e a quantidade definida pelo usuario

    for(i = 0; i < quantidade; i ++){ //inicio do laço para cadastrar o nome
        printf("\nDigite o nome do %d aluno\n", i +1); //solicita nome
        scanf("%s", aluno[i].nome); //armazena o nome na posição [i], do aluno

        printf("\nDigite a nota 1 do %d aluno\n", i +1); //solicitada nota1
        scanf("%f", &aluno[i].nota1); //armazena a nota1 na posição [i], do aluno

        printf("\nDigite a nota 2 do %d aluno\n", i + 1); //solicita nota2
        scanf("%f", &aluno[i].nota2); //armazena nota2 na posição [i], do aluno

        aluno[i].media = calcularMedia(aluno[i].nota1, aluno[i].nota2); //armazena a media na posição [i], chamando a função calcularMedia
    }

    for(i = 0; i < quantidade - 1; i ++){ //laço de Bubble Sort
        for(j = 0; j < quantidade - 1; j++){
            if(aluno[j].media < aluno[j + 1].media){ //se a media do aluno[0] < aluno[1]
                temp = aluno[j]; //temporario recebe aluno[0]
                aluno[j] = aluno[j + 1]; //aluno [0] recebe aluno [1]
                aluno[j + 1] = temp; //aluno [1] recebe aluno[0]
            }
        }
    }

    FILE *arquivo = fopen("alunos.txt", "w"); //cria o arquivo
    if(arquivo == NULL){ 
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo,"\n--- Alunos ordenados por media ---\n"); //escreve no arquivo

    for(i = 0; i < quantidade; i++){ //escreve no arquivo
        fprintf(arquivo,"Nome: %s\n", aluno[i].nome);
        fprintf(arquivo,"Nota: %.2f\n", aluno[i].media);
    }

    fclose(arquivo); //fecha o arquivo
    printf("Dados salvos com sucesso em 'alunos.txt'\n");


    return 0;
}
