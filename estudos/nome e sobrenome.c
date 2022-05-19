/*
Elabore um programa para ler o nome e o sobrenome
de dez pessoas, imprimindo-os no seguinte formato:
sobrenome, nome.*/

#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    char nomesCompletos[410];

    int i;
    for (i = 0; i < 10; i++)
    {
        char nome[20];
        char sobrenome[20];
        printf("%dDigite seu primeiro nome: ",i);
        scanf("%s", &nome);
        printf("Digite seu sobrenome: ");
        scanf("%s", &sobrenome);

        strcat(nomesCompletos, sobrenome);
        strcat(nomesCompletos, " ");
        strcat(nomesCompletos, nome);
        strcat(nomesCompletos, "\n");

    }
        printf("\nLista de nomes inseridos (sobrenome,nome):\n\n");
        printf("%s", nomesCompletos);
}