/* Faça um algoritmo que leia o lanche que você comeu no colégio, com as quantidades
de cada item, e te mostre o quanto você tem que pagar. Assuma que o lanche só pode
ter pão de queijo, coxinha, refrigerante e suco. Você pode inventar os preços dos
lanches.*/
#include <stdio.h>
int main(){

   int qtdPaodeQueijo, qtdCoxinha, qtdRefri, qtdSuco;
   float precoPao, precoCoxi, precoRefri, precoSuco, total; 

   precoPao = 3.5;
   precoCoxi = 5;
   precoRefri = 6.5;
   precoSuco = 4;

   printf("Digite as quantidades consumidas!\n");
   printf("Pao de queijo: \n");
   scanf("%d", &qtdPaodeQueijo);

   printf("Coxinha: \n");
   scanf("%d", &qtdCoxinha);

   printf("Refrigerante: \n");
   scanf("%d", &qtdRefri);

   printf("Suco: \n");
   scanf("%d", &qtdSuco);

total = (qtdPaodeQueijo * precoPao) + (qtdCoxinha * precoCoxi) + (qtdRefri * precoRefri) + (qtdSuco * precoSuco);

    printf("O lanche custou: R$ %.2f", total);
    return 0;

}
