 #include <stdio.h>

// PREENCHA UM VETOR C COM QUADRADO DE UM VETOR P

 int main(){

    int i, p[10], c[10];

    for(i=0 ; i<10 ;i++){
        printf("Digite o vetor da posicao %d: ", i);
        scanf("%d", &p[i]);
    }

    for(i=0; i<10;i++){
        c[i]= p[i]*p[i];
    }

    printf("\nVetores ao quadrado e vetor origem:\n");
    for(i=0; i<10;i++){
        printf("%2d ", c[i]);
    }

    printf("\n");
    for(i=0; i<10;i++){
        printf("%2d ", p[i]);
    }
    return 0;

 }