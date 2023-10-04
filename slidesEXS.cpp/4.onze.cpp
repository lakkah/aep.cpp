#include <stdio.h>


int main() {
    int n;
    
    printf("Digite um número de 1 a 5: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("UM\n");
            break;
        case 2:
            printf("DOIS\n");
            break;
        case 3:
            printf("TRÊS\n");
            break;
        case 4:
            printf("QUATRO\n");
            break;
        case 5:
            printf("CINCO\n");
            break;
        default:
            printf("Não é dígito de 1 a 5\n");
            break;
    }

    return 0;
}
