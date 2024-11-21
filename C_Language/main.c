#include <stdio.h>


int main(){ 


   int idade = 23;
   float altura = 1.70;
   char nome = 'a'; // so comporta uma letra, se quiser textos e palavras use vetor
   // double  %lf

   int idad = 0;
   
    
    printf("Minha idade e' %d, minha altura e' %2fm e a letra e' %c\n", idade, altura, nome); // formato para variáveis
    printf("Digite sua idade:\n");
    scanf("%d", &idad);

    return 0;
}   