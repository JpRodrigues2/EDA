#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x = calloc(1, sizeof(int));

    if(x){
        printf("memoria alocada com sucesso!\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }

    else{
        printf("erro ao alocar memoria!\n");
    }

    return 0;
}