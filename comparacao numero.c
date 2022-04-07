#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num1,num2;

int main(){        
    printf("Digite um numero inteiro: ");    
    scanf("%d",&num1);
    printf("Digite outro numero inteiro: ");    
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d eh maior que %d",num1,num2);
    }
    else if(num1<num2){
        printf("%d eh maior que %d",num2,num1);
    }
    else{
        printf("Os numeros sao iguais");
    }
}