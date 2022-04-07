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

//definição de funções

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

int main() {
    int i;    
    while(i!=0){
        i = menu();        
        system("cls");
        switch(i){
            case 0:
                break;            
            case 1:
                printf("cadastro\n\n");
                system("pause");
                system("cls");
                break;
            case 2:
                printf("exibir\n\n");
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