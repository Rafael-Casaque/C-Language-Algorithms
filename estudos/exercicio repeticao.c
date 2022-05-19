/*Escrever um programa que lê um conjunto de valores,
imprimindo, para cada valor: seu quadrado, seu cubo e sua raiz
quadrada. O conjunto é finalizado com o valor zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int i = 1;
int numero;

while(i==1){

printf("Digite um numero: ");
scanf("%d",&numero);
getchar();
if(numero==0){
    i=0;
}
else{
    printf("quadrado: %d\n",numero*numero);
    printf("cubo: %d\n",numero*numero*numero);
    printf("quadrado: %.2f\n",sqrt(numero));
}
}

}