#include <stdio.h>
#include <math.h>

/* 4.10) Leia três valores x, y e z que representam os lados de
um triângulo. Em seguida, informe se eles formam um
triângulo e, caso formem, indique se é um triângulo
equilátero, isósceles ou escaleno. */
int main () {
float x, y, z;
    printf("Quais sao os lados x, y e z do triangulo, respectivamente; ");
    scanf("%f %f %f", &x, &y, &z);

if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Os valores formam um triângulo equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os valores formam um triângulo isósceles.\n");
            } else {
            printf("Os valores formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}


   
   


        

