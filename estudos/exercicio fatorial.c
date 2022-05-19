/*Escrever um programa que lê um conjunto de valores,
imprimindo, para cada valor: seu quadrado, seu cubo e sua raiz
quadrada. O conjunto é finalizado com o valor zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero,Numero;
int somador=1;

printf("digite um numero inteiro: ");
scanf("%d",&numero);
Numero = numero;
for(numero;numero>=2;numero--){    
    somador = numero*somador;    
}

printf("o fatorial de %d eh: %d",Numero,somador);

}