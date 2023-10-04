/* 4.12) Leia um caractere op, representando uma operação
aritmética (+, -, *, /) e, em seguida, dois números reais a e
b. Imprima a expressão matemática junto com o seu
resultado no formato:
a op b = resultado 
Imprima mensagens de erro para as seguintes situações:
a) Operador inválido
b) Divisão por zero */
#include <stdio.h>

int main() {
    char op;
    double a, b, resultado;

    printf("Digite o operador aritmético (+, -, *, /): ");
    scanf(" %c", &op); // Use um espaço antes do %c para consumir qualquer espaço em branco residual.

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    switch (op) {
        case '+':
            resultado = a + b;
            printf("%.2lf + %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '-':
            resultado = a - b;
            printf("%.2lf - %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '*':
            resultado = a * b;
            printf("%.2lf * %.2lf = %.2lf\n", a, b, resultado);
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
                printf("%.2lf / %.2lf = %.2lf\n", a, b, resultado);
            } else {
                printf("Erro: Divisão por zero.\n");
            }
            break;
        default:
            printf("Erro: Operador inválido.\n");
            break;
    }

    return 0;
}
