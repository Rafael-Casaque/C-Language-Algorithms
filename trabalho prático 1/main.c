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

typedef struct {
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
    int count=0;
    int i;
    if(contador==0){
        printf("Nao ha alunos cadastrados");
    }
    else{

        //impressão do nome

        while(count<contador){
            printf("Nome: ");
            for(i=0; i<TAMNOME; i++){
                if(alunos[count].nome[i]==0){
                    printf("\n");
                    break;
                }
                else{
                    printf("%c",alunos[count].nome[i]);
                }
            }

        //impressão do sobrenome

            printf("Sobrenome: ");
            for(i=0; i<TAMSOBRENOME; i++){
                if(alunos[count].sobrenome[i]==0){
                    printf("\n");
                    break;
                }
                else{
                    printf("%c",alunos[count].sobrenome[i]);
                }
            }

        //impressão da data de nascimento            

            printf("Data de nascimento: ");
            printf("%d/",alunos[count].datadenascimento.dia);
            printf("%d/",alunos[count].datadenascimento.mes);
            printf("%d\n",alunos[count].datadenascimento.ano);

        //impressão do prontuário

            printf("Prontuario: ");
            printf("%d\n",alunos[count].prontuario);

        //impressão do curso

            printf("Curso: ");
            for(i=0; i<4; i++){
                if(alunos[count].curso[i]==0){
                    printf("\n----------------------\n");
                    break;
                }
                else{
                    printf("%c",alunos[count].curso[i]);
                }
            }
            
            count++;
        }
    }
}

int escolherFiltro(){
    system("cls");
    int i;    
    printf("1 - filtragem por nome e sobrenome");
    printf("\n2 - filtragem por nome");
    printf("\n3 - filtragem por sobrenome");
    printf("\n4 - filtragem por prontuario");
    printf("\n5 - filtragem por data de nascimento");
    printf("\n6 - filtragem por curso");
    printf("\n\nEscolha a opcao desejada de filtragem: ");
    scanf("%d",&i);
    system("cls");
    return i;
}

void filtragens(){
    char filtroNome[TAMNOME];
    char filtroSobrenome[TAMSOBRENOME];
    char filtroCurso[4];
    int filtroProntuario,filtroDia,filtroMes,filtroAno;
    int i = escolherFiltro();
    switch(i){
        case 1:            
            printf("Filtragem por nome e sobrenome");
            printf("\n------------------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);
            printf("Digite o sobrenome: ");
            scanf("%s",&filtroSobrenome);
            int i,count=0;
            int j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL && strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");

        break;

        case 2:
            printf("Filtragem por nome");
            printf("\n------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);        
            count=0;
            j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");    
        break;

        case 3:
            printf("Filtragem por sobrenome");
            printf("\n-----------------------");
            printf("\n\nDigite o sobrenome: ");
            scanf("%s",&filtroSobrenome);
            count=0;
            j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");    
        break;

        case 4:
            printf("Filtragem por prontuario");
            printf("\n------------------------");
            printf("\n\nDigite o prontuario: ");
            scanf("%d",&filtroProntuario);
            count=0;
            j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(alunos[count].prontuario==filtroProntuario){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");    
        break;

        case 5:
            printf("Filtragem por data de nascimento");
            printf("\n--------------------------------");
            printf("\n\nDigite o dia: ");
            scanf("%d",&filtroDia);
            printf("Digite o mes: ");
            scanf("%d",&filtroMes);
            printf("Digite o ano: ");
            scanf("%d",&filtroAno);
            count=0;
            j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(alunos[count].datadenascimento.dia==filtroDia && alunos[count].datadenascimento.mes==filtroMes && alunos[count].datadenascimento.ano==filtroAno ){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");    
        break;

        case 6:
            printf("Filtragem por curso");
            printf("\n-------------------");
            printf("\n\nDigite o curso: ");
            scanf("%s",&filtroCurso);                     
            count=0;
            j=0;
            system("cls");
            printf("Alunos encontrados com a filtragem inserida:\n");
            while(count<contador){
                if(strstr(alunos[count].curso,filtroCurso)!=NULL){
                    printf("\n------------------------------\n");

                    //impressão do nome                
                    printf("Nome: ");
                    for(i=0; i<TAMNOME; i++){
                        if(alunos[count].nome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].nome[i]);
                        }
                    }
        
                    //impressão do sobrenome
                    printf("Sobrenome: ");
                    for(i=0; i<TAMSOBRENOME; i++){
                        if(alunos[count].sobrenome[i]==0){
                        printf("\n");
                        break;
                        }
                        else{
                            printf("%c",alunos[count].sobrenome[i]);
                        }
                    }

                    //impressão da data de nascimento            
                        printf("Data de nascimento: ");
                        printf("%d/",alunos[count].datadenascimento.dia);
                        printf("%d/",alunos[count].datadenascimento.mes);
                        printf("%d\n",alunos[count].datadenascimento.ano);

                    //impressão do prontuário

                        printf("Prontuario: ");
                        printf("%d\n",alunos[count].prontuario);

                    //impressão do curso

                        printf("Curso: ");
                        for(i=0; i<4; i++){
                            if(alunos[count].curso[i]==0){                                
                                break;
                            }
                            else{
                                printf("%c",alunos[count].curso[i]);
                            }
                        }
                    }
                    else{
                        j++;
                    }
                    count++;
                }
                if(j==contador) printf("\nNenhum aluno foi econtrado com a busca especificada\n");    
        break;
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
                filtragens();
                printf("\n");
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