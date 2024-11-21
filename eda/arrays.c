#include <stdio.h>;

int main(){

    /*  int num1[10];
        int num2[] = {1,2,3,4,5};
        int num3[5] = {4,7,5}; preenche o resto com '0'
        int num4[5] = {0};  tudo 0 */
    
    
    int v[5];
    int i;

    for (i=0;i<5;i++){
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos:\n");
    for(i=0;i<5;i++){
        printf("%d ", v[i]); //espaço para dar espaço quando imprimir
    }

}

