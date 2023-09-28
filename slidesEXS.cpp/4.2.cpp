//4.2) Leia dois valores inteiros a e b. Em seguida, imprima
//primeiro o menor valor e, depois, o maior valor.
#include <stdio.h> 
int main (){

    int a, b;

    printf("Digite os valores de A e B, respectivamente: \n");
    scanf("%d %d", &a, &b);

    if (a < b && a != b){
        printf("Menor valor A: %d \n Maior valor B: %d", a, b);
        
    }
    else if (b < a && b != a){
        printf("Menor valor B: %d \n Maior valor A: %d", b, a);

        }
     else 
     printf("sao iguais.");
     return 0;
}
