#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

int main()
{
    printf("digite um valor de 1 a 7: ");
    scanf("%d", &n);

    switch (n){
        case 1:
        printf("domingo, final de semana");
        break;
        case 2:
        printf("segunda-feira, dia util");
        break;
        case 3:
        printf("terca-feira, dia util");
        break;
        case 4:
        printf("quarta-feira, dia util");
        break;
        case 5:
        printf("quinta-feira, dia util");
        break;
        case 6:
        printf("sexta-feira, dia util");
        break;
        case 7:
        printf("sabado, fim de semana");
        break;
    }
}