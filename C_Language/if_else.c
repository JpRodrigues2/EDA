#include <stdio.h>

int main(){

    float m;
    printf("insira a nota:\n");
    scanf("%f", &m);

    if(m >= 5.0){
        printf("Aprovado!\n");
    }

    else {
        printf("Reprovado!");
    }
}

