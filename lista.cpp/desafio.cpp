/* Escreva um programa para calcular a redução do tempo de vida de um fumante. Pergunte
a quantidade de cigarros fumados por dias e quantos anos ele já fumou. Considere que um
fumante perde 10 min de vida a cada cigarro. Calcule quantos dias de vida um fumante
perderá e exiba o total em dias.*/
#include <stdio.h>

int main()
{
    int qtdCiga, anos;
    float minPerdidos, diasPerdidos;
    
    
    printf("Quantos cigarros vc fuma por dia?");
    scanf("%d", &qtdCiga);  
    
    printf("Ha quantos anos vc ja fuma?");
    scanf("%d", &anos);
    
    minPerdidos = (qtdCiga * 10) * (anos * 365);

    diasPerdidos = minPerdidos / (24 * 60);
    
    printf("Voce perdeu %.2f", diasPerdidos);
    
}
