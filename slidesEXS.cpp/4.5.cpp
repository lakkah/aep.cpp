/* 4.5) Leia dois valores reais x e y e imprima a divisão entre
eles. Caso o divisor seja zero, imprima a mensagem "Não é
possível dividir por zero". */
#include <stdio.h>
int main (){

    float x, y, result;
    printf("Digite o valor do dividendo X, depois do divisor Y: \n");
    scanf("%f %f", &x, &y);

    result = x / y;

    if (y == 0)
    printf("Nao eh possivel dividir por 0");

        else printf(" %.4f eh o resultado da divisão.", result);


}
