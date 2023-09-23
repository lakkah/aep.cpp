/* A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um
programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo
que o carro custa R$90 por dia e R$0,20 por Km rodado.*/

#include <stdio.h>
int main (){

    int dias, km;
    float preco;

    printf("Ola! Quantos dias vc ficou com o carro? \n");
    scanf("%d", &dias);

    printf("Quantos Kilometros vc percorreu com o carro?: \n");
    scanf("%d", &km);
    
    preco = (90 * dias) + (0.2 * km);

    printf("O preco total será de: R$ %.2f", preco);
    return 0;



}
