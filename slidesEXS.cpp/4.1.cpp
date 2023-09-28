//4.1 Converta o algoritmo do cálculo da média para C/C++.


#include <stdio.h>
int main(){ 

    float p1, p2, media;

    printf("Oi @, qual foram suas notas da P1 e P2, respectivamente?\n ");
    scanf("%f %f", &p1, &p2);

    media = (p1 + p2) / 2;

    if(media >= 7){
        printf("APROVADO com media %.2f \n", media);


    }   else printf("REPROVADO com media %.2f4\n", media);
    return 0;



}
