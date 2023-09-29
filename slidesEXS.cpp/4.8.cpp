/* 4.8) Calcule as raízes de uma equação do 2o grau, a partir
dos coeficientes a, b e c. Se o valor de a for zero ou delta for
negativo, imprima mensagens de erro. */

#include <stdio.h>
#include <math.h>

int main(){


float a, b, c, delta;
    printf("Informe os valores de A, B e C \n");
    scanf("%f %f %f", &a, &b, &c);


delta = (b*b) - (4*(a)*(c));

    if(delta > 0 && a != 0){
    float x, y;
    delta = sqrt(delta);
        x = (-b + delta) / (2*a);
		y = (-b - delta) / (2*a);

            printf("raiz1 %.4f\n", x);
            printf("raiz2 %.4f\n", y);
    }
    else 
    printf("valores incorretos, nao possui raizes");
                return 0;             
}
