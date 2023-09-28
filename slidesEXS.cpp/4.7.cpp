/* 4.7) Leia um valor inteiro n e dois valores (inferior e
superior). Por fim, imprima se n está antes, dentro ou fora
do intervalo inferior..superior. */
#include <stdio.h>
int main (){

    int n, inferior, superior;
    
    printf("Digite o valor de N: \n");
    scanf("%d", &n);

    printf("Digite o valor inferior: \n");
    scanf("%d", &inferior);

    printf("Digite o valor superior:\n");
    scanf("%d", &superior);

        if (n < inferior) {
        printf("%d ta antes do intervalo %d, %d.\n", n, inferior, superior);
       } else if (n >= inferior && n <= superior) {
        printf("%d ta dentro do intervalo %d, %d.\n", n, inferior, superior);
        } else {
        printf("%d está fora do intervalo %d, %d.\n", n, inferior, superior);
    }

}
