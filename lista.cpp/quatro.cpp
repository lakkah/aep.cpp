/* Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO
PROMOCIONAL, com 5% de desconto.*/ 
#include <stdio.h>
int main (){

 float preco, promo;

    printf("Quanto custa o produto que vc escolheu?\n");
    scanf("%f", &preco);

    promo = preco * 0.95;

    printf("O novo valor com desconto eh R$ %.2f", promo);

    return 0;


}
