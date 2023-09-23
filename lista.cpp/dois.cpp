/* Complete o programa anterior para que também seja perguntada a idade e a
mensagem informe também essa idade: “Oi Fulano! Você tem X anos.”.*/

#include <stdio.h>
int main () {
    char nome[255];
    int anos;
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade em anos.");
    scanf("%d", &anos);
    

    printf("Parabens %s, voce tem %d anos de idade!!", nome, anos);




}
