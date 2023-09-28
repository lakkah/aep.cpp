/* 4.4) Leia um valor inteiro n e imprima uma mensagem
dizendo se n é par ou ímpar. */ 
#include <stdio.h>
int main (){

int n;
    printf("Informe o valor de N: \n");
    scanf("%d", &n);

    if (n % 2 == 0)
    printf("N eh par");
    else printf("N eh impar.");
    return 0;
}
