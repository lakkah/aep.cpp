#include <stdio.h>
#include <math.h>

/* 4.9) Leia um valor que representa um ano e imprima se ele é
bissexto. Se ele não for bissexto, indique qual o próximo ano
bissexto.*/

 int main(){

int ano, prox, bissexto;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(( ano % 4 == 0 && ano % 100 != 0) || ( ano % 400 == 0))
        printf("%d eh um ano bissexto!\n", ano);

else {
    prox = ano + 1;
    while (!((prox % 4 == 0 && prox % 100 != 0) || (prox % 400 == 0))) {
              prox++;  
        printf("%d não eh bissexto. o proximo ano bissexto eh %d", ano, prox);
    }}

} 

