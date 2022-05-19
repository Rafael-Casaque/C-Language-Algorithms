#include<conio.h>
#include<stdio.h>
#include<math.h>

int main ()
{
    int x =1, i, num = 0, cont = 0, cp = 0;
    printf("Algoritmo dos primeiros 20n primos ");
    printf("\n----------------------------------------");
    printf("\n\n\n");

    while (cp < 20){
        num = num + 1;
        cont = 0;
        for (i=1;i<=num;i++){
            if (num % i == 0){
                cont = cont + 1;
            }
        }
        if (cont == 2){ //if (cont = 2)
            cp = cp + 1;
            printf("\n%d eh primo ", num);
        }
        
    }
}