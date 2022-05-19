#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float num1=1, num2=1;

int main()
{
    while(1)
    {
        printf("\n\nDigite o primeiro numero: ");
        scanf("%f", &num1);
        if(num1==0){
            break;
        }
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        if(num2==0){
            break;
        }
        printf("\nA media aritmetica dos numeros digitados eh: %.2f",(num1+num2)/2);
        printf("\nSe quiser encerrar o programa, digite 0");
    }
}