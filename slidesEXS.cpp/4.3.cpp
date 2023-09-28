/* 4.3) Leia dois valores inteiros a e b e imprima uma
mensagem dizendo se a é menor ou igual a b ou se a é
maior que b. */

#include <stdio.h>
int main (){
 
int a, b;

    printf("Informe os valores para A e B, respectivamente: \n");
    scanf("%d %d",  &a, &b);

    if (a > b)
    printf("A: %d eh maior que B: %d", a, b);

        else if (a <= b)
        printf("A: %d eh menor ou igual a B: %d", a, b);
            
            
        return 0;


}
