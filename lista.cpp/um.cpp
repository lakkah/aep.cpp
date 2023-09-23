/*  Faça um programa que pergunte o nome de uma pessoa e imprima uma mensagem do
tipo “Oi Fulano!”, onde “Fulano” é o nome da pessoa. */

#include <stdio.h>
int main () {
    char nome[255];
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Parabens %s, voce eh fera!!", nome);


}
