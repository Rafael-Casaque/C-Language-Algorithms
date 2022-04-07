#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c;
float delta;

int main(){        
    printf("Digite o valor de a na formula de Bhaskara: ");    
    scanf("%d",&a);
    printf("Digite o valor de b na formula de Bhaskara: ");    
    scanf("%d",&b);
    printf("Digite o valor de c na formula de Bhaskara: ");    
    scanf("%d",&c);

    delta = (b*b)-(4*a*c);    

    if(delta<0){
        printf("o valor de delta eh negativo");
    }
    else if(delta>0){
        printf("o valor de delta eh positivo");
    }
    else{
        printf("o valor de delta eh zero");
    }
}