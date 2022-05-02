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

//Variáveis globais

aluno alunos[1000]; 
int contador = 0;
int menorNome = 50;
int menorSobrenome = 50;
int menorCurso = 4;
int vetorNome[1000];
int vetorDias[1000];
int vetorSobrenome[1000];
int vetorCurso[1000];

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
    int i;
    printf("Digite o nome do aluno: ");    
    scanf("%s",&alunos[contador].nome);        
    for(i=0; i<TAMNOME; i++){
        if(alunos[contador].nome[i]==0){
            if(i<menorNome) menorNome=i;
        }
    }
    printf("Digite o sobrenome do aluno: ");    
    scanf("%s",&alunos[contador].sobrenome);    
    for(i=0; i<TAMNOME; i++){
        if(alunos[contador].sobrenome[i]==0){
            if(i<menorSobrenome) menorSobrenome=i;
        }
    }
    printf("Digite o prontuario do aluno: ");    
    scanf("%d",&alunos[contador].prontuario);
    printf("Digite o curso do aluno: ");    
    scanf("%s",&alunos[contador].curso);
    for(i=0; i<3; i++){
        if(alunos[contador].curso[i]==0){
            if(i<menorCurso) menorCurso=i;
        }
    }
    printf("Digite o dia de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.dia);
    printf("Digite o mes de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.mes);
    printf("Digite o ano de nascimento do aluno: ");    
    scanf("%d",&alunos[contador].datadenascimento.ano);        
    contador++;
}

void imprimirString(char string[]){
    int i;
    for(i=0; i<TAMNOME;i++){
        if(string[i]==0){
            break;
        }
        else{
            printf("%c",string[i]);
        }
    }
}

void imprimirTodos(){
    if(contador==0){
        printf("Nao ha alunos cadastrados!\n");
    }
    else{
        int count = 0;
        while(count<contador){
            printf("\n----------------\n");
            printf("\nNome: ");
            imprimirString(alunos[count].nome);
            printf("\nSobrenome: ");
            imprimirString(alunos[count].sobrenome);
            printf("\nProntuario: %d",alunos[count].prontuario);
            printf("\nCurso: ");
            imprimirString(alunos[count].curso);
            printf("\nData de nascimento: %d/%d/%d",alunos[count].datadenascimento.dia,alunos[count].datadenascimento.mes,alunos[count].datadenascimento.ano);
            count++;
        }
    }
    
    
}

void imprimirFiltrados(int TAMANHO, int filtrados[]){
    int count = 0;
    while(count < TAMANHO){
        printf("\n----------------\n");
            printf("\nNome: ");
            imprimirString(alunos[filtrados[count]].nome);
            printf("\nSobrenome: ");
            imprimirString(alunos[filtrados[count]].sobrenome);
            printf("\nProntuario: %d",alunos[filtrados[count]].prontuario);
            printf("\nCurso: ");
            imprimirString(alunos[filtrados[count]].curso);
            printf("\nData de nascimento: %d/%d/%d",alunos[filtrados[count]].datadenascimento.dia,alunos[filtrados[count]].datadenascimento.mes,alunos[filtrados[count]].datadenascimento.ano);
            count++;
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

int filtragens(){
    int filtrados[1000];
    char filtroNome[TAMNOME];
    char filtroSobrenome[TAMSOBRENOME];
    char filtroCurso[4];
    int filtroProntuario,filtroDia,filtroMes,filtroAno;
    int i = escolherFiltro();
    int count;
    switch(i){
        case 1:            
            printf("Filtragem por nome e sobrenome");
            printf("\n------------------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);
            printf("Digite o sobrenome: ");
            scanf("%s",&filtroSobrenome);     
            count = 0;
            int i=0;
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL && strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }            

        break;

        case 2:
            printf("Filtragem por nome");
            printf("\n------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);                    
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }        
        break;

        case 3:
            printf("Filtragem por sobrenome");
            printf("\n-----------------------");
            printf("\n\nDigite o sobrenome: ");
            scanf("%s",&filtroSobrenome);            
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }        
        break;

        case 4:
            printf("Filtragem por prontuario");
            printf("\n------------------------");
            printf("\n\nDigite o prontuario: ");
            scanf("%d",&filtroProntuario);            
            count = 0;
            i=0;
            while(count<contador){
                if(alunos[count].prontuario==filtroProntuario){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }        
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
            count = 0;
            i=0;
            while(count<contador){
                if(alunos[count].datadenascimento.dia==filtroDia && alunos[count].datadenascimento.mes==filtroMes && alunos[count].datadenascimento.ano==filtroAno){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }        
        break;

        case 6:
            printf("Filtragem por curso");
            printf("\n-------------------");
            printf("\n\nDigite o curso: ");
            scanf("%s",&filtroCurso);                                 
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].curso,filtroCurso)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
            }        
        break;
    }
}

void excluir(int TAMANHO, int filtrados[]){
    int op;
    printf("\nDeseja realizar a exclusao desses alunos?");
    printf("\n1 - Sim ");
    printf("\n2 - Nao ");
    printf("\n\nInsira o numero correspondente: ");
    scanf("%d",&op);
    if(op==1){
        int i,j,encontrado=-1;
        if(TAMANHO==contador) contador=0;
        else{
            for(i=0;i<TAMANHO;i++){
                alunos[filtrados[i]] = alunos[contador+1];
            }
            for(i=contador;i>=0;i--){            
                for(j=contador;j>=0;j--){
                    if(alunos[i].nome[0]==NULL){                                
                        if(alunos[j].nome[0]!=NULL){
                            alunos[contador+1]=alunos[j];
                            alunos[j]=alunos[i];
                            alunos[i]=alunos[contador+1];                            
                            break;
                        }
                    }
                }            
            }  
            contador-=TAMANHO;              
        }            
    }    
}

void filtrarExcluir(){
    int filtrados[1000];
    char filtroNome[TAMNOME];
    char filtroSobrenome[TAMSOBRENOME];
    char filtroCurso[4];
    int filtroProntuario,filtroDia,filtroMes,filtroAno;
    int i = escolherFiltro();
    int count;
    switch(i){
        case 1:            
            printf("Filtragem por nome e sobrenome");
            printf("\n------------------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);
            printf("Digite o sobrenome: ");
            scanf("%s",&filtroSobrenome);     
            count = 0;
            int i=0;
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL && strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);
            }            
            
        break;

        case 2:
            printf("Filtragem por nome");
            printf("\n------------------");
            printf("\n\nDigite o nome: ");
            scanf("%s",&filtroNome);                    
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].nome,filtroNome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);          
            }                    
        break;

        case 3:
            printf("Filtragem por sobrenome");
            printf("\n-----------------------");
            printf("\n\nDigite o sobrenome: ");
            scanf("%s",&filtroSobrenome);            
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].sobrenome,filtroSobrenome)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);          
            }                    
        break;

        case 4:
            printf("Filtragem por prontuario");
            printf("\n------------------------");
            printf("\n\nDigite o prontuario: ");
            scanf("%d",&filtroProntuario);            
            count = 0;
            i=0;
            while(count<contador){
                if(alunos[count].prontuario==filtroProntuario){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);                   
            }                    
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
            count = 0;
            i=0;
            while(count<contador){
                if(alunos[count].datadenascimento.dia==filtroDia && alunos[count].datadenascimento.mes==filtroMes && alunos[count].datadenascimento.ano==filtroAno){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);          
            }                    
        break;

        case 6:
            printf("Filtragem por curso");
            printf("\n-------------------");
            printf("\n\nDigite o curso: ");
            scanf("%s",&filtroCurso);                                 
            count = 0;
            i=0;
            while(count<contador){
                if(strstr(alunos[count].curso,filtroCurso)!=NULL){
                    filtrados[i]=count;
                    i++;                    
                }
                count++;
            }
            if(i==0){
                printf("Nao foram encontrados resultados com a filtragem inserida");                
            }
            else{
                imprimirFiltrados(i,filtrados);                
                printf("\n");
                excluir(i,filtrados);          
            }                    
        break;
    }
}

void trocar(aluno alunos[], aluno alunos_menor[]) {
    alunos[contador+2] = *alunos;
    *alunos = *alunos_menor;
    *alunos_menor = alunos[contador+2];
}

int menor_elemento( aluno alunos[], int n, int primeiro) {
    int i, menor = primeiro;
    for (i = primeiro + 1; i < n; i++) {
    if (alunos[i].prontuario < alunos[menor].prontuario)
    menor = i;
    }
    return menor;
}

int ordenar_selecao(aluno alunos[], int n) {
    int i, menor;
    for (i = 0; i < n; i++) {
    menor = menor_elemento(alunos, n, i);
    trocar(&alunos[i], &alunos[menor]);
    }
}

int menor_elemento2( int vetorNome[], int n, int primeiro) {
    int i, menor = primeiro;
    for (i = primeiro + 1; i < n; i++) {
    if (vetorNome[i] < vetorNome[menor])
    menor = i;
    }
    return menor;
}

int ordenar_selecao2(int vetorNome[], aluno alunos[], int n) {
    int i, menor;
    for (i = 0; i < n; i++) {
    menor = menor_elemento2(vetorNome, n, i);
    trocar(&alunos[i], &alunos[menor]);
    }
}

int menor_elemento3( int vetorDias[], int n, int primeiro) {
    int i, menor = primeiro;
    for (i = primeiro + 1; i < n; i++) {
    if (vetorDias[i] < vetorDias[menor])
    menor = i;
    }
    return menor;
}

int ordenar_selecao3(int vetorDias[], aluno alunos[], int n) {
    int i, menor;
    for (i = 0; i < n; i++) {
    menor = menor_elemento2(vetorDias, n, i);
    trocar(&alunos[i], &alunos[menor]);
    }
}

int escolherOrdem(){
    system("cls");
    int i;    
    printf("1 - ordenar por nome");
    printf("\n2 - ordenar por sobrenome");    
    printf("\n3 - ordenar por prontuario");
    printf("\n4 - ordenar por data de nascimento");
    printf("\n5 - ordenar por curso");
    printf("\n\nEscolha a opcao desejada de filtragem: ");
    scanf("%d",&i);
    system("cls");
    return i;
}

int conversor(char letra){    
    char letras[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int i;
    for(i=0;i<25;i++){
        if(letra==letras[i]) return i+1;
    }        
}

int conversorData(aluno alunos[], int i){
    int fev,dias=0;
    if(alunos[i].datadenascimento.ano%4==0) fev = 1;                            
    else fev = 0;                        
    dias += 365*alunos[i].datadenascimento.ano;        
    dias += alunos[i].datadenascimento.dia;        
    switch(alunos[i].datadenascimento.mes){
        case 1:
            dias += 0;
        break;
        case 2:
            dias += 31;
        break;
        case 3:
            dias += 31 + 28 + fev;
        break;
        case 4:
            dias += 31 + 28 + fev + 31;
        break;
        case 5:
            dias += 31 + 28 + fev + 31 + 30;
        break;
        case 6:
            dias += 31 + 28 + fev + 31 + 30 + 31;
        break;
        case 7:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30;
        break;
        case 8:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30 + 31;
        break;
        case 9:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30 + 31 + 31;
        break;
        case 10:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        break;
        case 11:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        break;
        case 12:
            dias += 31 + 28 + fev + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        break;
    }
    return dias;
}

void ordenarNome(){
    int j,k,soma=0;
    for(j=0;j<contador;j++){
                for(k=0;k<menorNome;k++){                
                    if(k==0){
                        soma += (conversor(alunos[j].nome[k])*1000);        
                    }
                    else{
                        soma += (conversor(alunos[j].nome[k])*(1000/(50*k)));
                    }                                        
                }                               
                vetorNome[j] = soma;                     
                soma = 0;                                
            }            
            ordenar_selecao2(vetorNome,alunos,contador);                        
}

void ordenarSobrenome(){
    int j,k,soma=0;
    for(j=0;j<contador;j++){
                for(k=0;k<menorSobrenome;k++){                
                    if(k==0){
                        soma += (conversor(alunos[j].sobrenome[k])*1000);        
                    }
                    else{
                        soma += (conversor(alunos[j].sobrenome[k])*(1000/(50*k)));
                    }                                        
                }                               
                vetorSobrenome[j] = soma;                     
                soma = 0;                                
            }            
            ordenar_selecao2(vetorSobrenome,alunos,contador);                        
}

void ordenarCurso(){
    int j,k,soma=0;
    for(j=0;j<contador;j++){
                for(k=0;k<menorCurso;k++){                
                    if(k==0){
                        soma += (conversor(alunos[j].curso[k])*1000);        
                    }
                    else{
                        soma += (conversor(alunos[j].curso[k])*(1000/(50*k)));
                    }                                        
                }                               
                vetorCurso[j] = soma;                     
                soma = 0;                                
            }            
            ordenar_selecao2(vetorCurso,alunos,contador);                        
}

void ordenarAniversario(){    
    int i;
    for(i=0;i<contador;i++){
        vetorDias[i] = conversorData(alunos,i);
    }
    ordenar_selecao3(vetorDias,alunos,contador);
}

void ordenar(){
    int i = escolherOrdem();    
    int j;
    switch(i){
        case 1:
            for(j=0;j<contador;j++) ordenarNome();
        break;
        case 2:
            for(j=0;j<contador;j++) ordenarSobrenome();
        break;
        case 3:
            ordenar_selecao(alunos,contador);
        break;
        case 4:
            ordenarAniversario();
        break;
        case 5:
            for(j=0;j<contador;j++) ordenarCurso();
        break;
    }    
}

int main() {
    int i,j;    
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
                imprimirTodos();                                                                
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
                filtrarExcluir();
                printf("\n");
                system("pause");
                system("cls");
                break;
            case 5:
                ordenar();                
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