/* 4.6) Leia dois valores inteiros x e y e imprima uma
mensagem que informa se: x é divisor de y, y é divisor de x,
ou nem x divide y, nem y divide x. */
#include <stdio.h>
int main (){

    int x, y;

    printf("Informe o valor de X e de Y, respectivamente:\n");
    scanf("%d %d", &x, &y);
    
    if(y % x == 0){
        printf("%d eh divisor de %d.\n", x, y);
}
    else if (x % y == 0){
                printf("%d eh divisor de %d.\n", y, x);
    }
    else 
    printf(" Nenhum eh divisor do outro");

    return 0;
    
}
