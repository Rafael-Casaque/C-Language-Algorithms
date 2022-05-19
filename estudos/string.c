#include<conio.h>
#include<stdio.h>
#include<math.h>

int main ()
{
char a[] = "Rafael";
char b[10];
char c[] = "Rocha";
char nomeCompleto[30];

int i = 0;

printf("%d", strlen(a)); //printa a quantidade de letras no vetor

strcpy(b,a); //copia o conteúdo de uma variável à outra

printf("\n%s + %s", a,b); //printa a string

printf("\n%d",strcmp(a,b)); //compara uma string à outra (retorna 0 se forem iguais, <0 se a<b e >0 se a>b)

strcat(nomeCompleto, a); //concatena "Rafael" na variável
strcat(nomeCompleto," "); //concatena um espaço em branco
strcat(nomeCompleto,c); //concatena "Rocha" na variável após "Rafael"

printf("\n%s",nomeCompleto); //printa o nome completo, com as 3 concatenações*/

}