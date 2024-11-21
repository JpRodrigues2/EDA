#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet){
        for(i = 0;i<tam;i++)
            *(vet + i) = rand() % 100; //aritmética de ponteiro, para acessar o conteudo
        
        for(i = 0; i < tam;i++)
            printf("%d ", *(vet + i));   
        printf("\n");

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam); //realloc

        printf("\n vetor realocado:\n");
        for(i = 0; i < tam;i++)
            printf("%d ", *(vet + i));   
        printf("\n");

        free(vet); // Limpar a memoria
    }

    else{
        printf("erro ao alocar memoria\n");
    }


    return 0;
}