#include <stdio.h>

int main (void){

    struct ficha_aluno{ //tipo de dado
    char nome[40];
    int numero;
    float nota;
    };

    struct ficha_aluno aluno;

    printf("\n-------Cadastro de aluno-------\n\n");

    printf("nome do aluno.......: ");
    scanf("%39s", aluno.nome);

    printf("numero do aluno.......: ");
    scanf("%d", &aluno.numero);

    printf("nota do aluno.......: ");
    scanf("%f", &aluno.nota);

    printf("Nome.......: %s\n", aluno.nome);
    printf("Numero.......: %d\n", aluno.numero);
    printf("Nota.......: %f\n", aluno.nota);

    return 0;
}