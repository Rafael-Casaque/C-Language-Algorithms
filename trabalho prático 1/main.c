//Importação de bibliotecas

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//Definição de constantes

#define TAMNOME 50
#define TAMSOBRENOME 50

//Criação de struct para data

typedef struct data {
 int dia;
 int mes;
 int ano;
} data;

//Criação de struct para registro

typedef struct registro {
 char nome [TAMNOME];
 char sobrenome [TAMSOBRENOME];
 data datadenascimento;
 int prontuario;
 char curso [4];
} aluno;

aluno alunos[1000]; 

//Variáveis globais

int contador = 0;

//Criação das funções

int menu(){
    int i;    
    printf("--- Menu ---\n\n");
    printf("0 - Finalizar o programa.\n");
    printf("1 - Cadastrar Aluno.\n");
    printf("2 - Exibir todos os aluno cadastrados.\n");
    printf("3 - Filtrar aluno(s).\n");
    printf("4 - Excluir aluno(s).\n");
    printf("5 - Ordenar aluno(s).\n");
    printf("\nDigite o comando desejado: ");
    scanf("%d",&i);            
    return i;
}

void cadastro(){    
    printf("Digite o nome do aluno: ");    
    scanf("%s",&alunos[contador].nome);    
    printf("Digite o sobrenome do aluno: ");    
    scanf("%s",&alunos[contador].sobrenome);    
    printf("Digite o prontuario do aluno: ");    
    scanf("%d",&alunos[contador].prontuario);
    printf("Digite o curso do aluno: ");    
    scanf("%s",&alunos[contador].curso);
    printf("Digite o dia de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.dia);
    printf("Digite o mes de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.mes);
    printf("Digite o ano de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.ano);        
    contador++;
}

void imprimir(){ 
    int i,j,count=0;
    if(contador==0)
        printf("nao ha alunos cadastrados!");
    else{
        printf("Alunos cadastrados:\n\n");
        for(i=0; i<contador; i++){            
            for(j=0; j<TAMNOME; j++){
                if(alunos[count].nome[j]==0){                    
                    printf("\n");
                    count++;
                    break;                    
                }
                else{                  
                    printf("%c",alunos[count].nome[j]);
                }
            }
        }
    }
}

int main() {
    int i;    
    while(i!=0){
        i = menu();        
        system("cls");
        switch(i){
            case 0:
                break;            
            case 1:
                cadastro();                
                system("\n\npause");
                system("cls");
                break;
            case 2:
                imprimir();                
                printf("\n");
                system("pause");
                system("cls");
                break;
            case 3:
                printf("filtrar\n\n");
                system("pause");
                system("cls");
                break;
            case 4:
                printf("excluir\n\n");
                system("pause");
                system("cls");
                break;
            case 5:
                printf("ordenar\n\n");
                system("pause");
                system("cls");
                break;            
            default:
                printf("comando invalido, digite novamente!\n\n");
                system("pause");
                system("cls");
                break;
        }
    }    
}