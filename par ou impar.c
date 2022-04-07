#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

int main()
{
    printf("digite um valor: ");
    scanf("%d", &n);
    if(n%2==0)
        printf("%d eh um numero par",n);
    else
        printf("%d eh um numero impar",n);
}