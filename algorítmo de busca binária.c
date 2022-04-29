//Esse método apenas funciona em vetores ordenados

int buscaBinaria (int vetor[], int tamanho, int chave){
    int ini = 0;
    int fim = tamanho-1;
    int meio;
    while(ini <= fim){
        meio = (ini+fim)/2;
        if (chave == vetor[meio]) return meio;
        if (chave < vetor[meio]) fim = meio-1;
        else ini = meio+1;
    }
    return -1; //Não encontradp
}

int main(){
    int vetor[]={1,2,3,4,5,6,7,8,9,10};
    printf("%d",buscaBinaria(vetor,10,10)); //retorna o indice da chave especificada
}