#include <stdio.h>
#include<stdlib.h>

int main(){

    int *x = malloc(sizeof(int));
    char *nome = malloc(sizeof(char)*50); // string de 50 posições 
    float *f = malloc ( sizeof ( float ) *10) ; // vetor float - 10 posicoes

    if(x){
        printf("memoria alocada com sucesso1!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }

    else{
        printf("erro ao alocar memoria!\n");
    }
}