#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char string[50],string2[50];    
    printf("Digite uma string: ");
    gets(string);
    FILE *file;    //cria a variável para o arquivo
    
    file = fopen ( "arquivo.txt", "wb" ); //abre o arquivo no modo de escrita
    for (i=0; i < strlen(string); i++){
        fputc(string[i],file);  //percorre um laço escrevendo letra por letra no arquivp
    }
    fclose(file); //fecha o arquivo

    file = fopen ( "arquivo.txt", "r" ); //abre o arquivo no modo de escrita
    
    i=0;

    system("pause");

    printf("Conteudo do arquivo: ");

    while(string2[i]!=EOF){ //faz um loop até obter a resposta End Of File
        string2[i] = fgetc(file); //aloca o caractere encontrada na posição do array
        printf("%c",string2[i]); //imprime o caractere alocado
        i++; //iterador
    }
}