/* Pedrinho quer comprar o maior número de bombons possível com o dinheiro que tem.
Faça um programa para calcular quantos bombons ele consegue comprar. Peça ao
usuário o dinheiro que ele tem e quantos bombons quer comprar.*/
#include <stdio.h>
int main() {
    float dinheiro;  
    int bombons, quantidadeBombons;

    printf("Quanto dinheiro vc temm?\n");
    scanf("%f", &dinheiro);

    printf("Quantos bombons quer comprar?\n");
    scanf("%d", &bombons);

//bombom eh 2 reais.
    quantidadeBombons = dinheiro / 2.0;   

    printf("Vc so pode comprar %d bombons", quantidadeBombons);

		 return 0;
}
