/*
3- Escreva um programa que leia um número inteiro e indique se
o mesmo é primo ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero,Numero;
int contador=0;

printf("digite um numero inteiro: ");
scanf("%d",&numero);
Numero = numero;

for(numero;numero>=1;numero--){    
   if(Numero%numero == 0){
       printf("%d eh divisivel por %d\n",Numero,numero);
       contador+=1;
   } 
}

if(contador<=2){
    printf("%d eh um numero primo!",Numero);
}
else{
    printf("%d nao eh um numero primo!",Numero);
}
}