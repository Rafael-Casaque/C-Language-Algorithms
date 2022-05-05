<h1>Saudações!</h1>
<h3>Esse código foi desenvolvido para o primeiro trabalho semestral da disciplina de Algoritmos e Programação 2, presente na grade curricular do curso de Análise e Desenvolvimento de Sistemas do Instituto Federal de São Paulo.</h3>
<h2>Resumo:</h2>
<p>Esse projeto consiste na elaboração de um sistema de cadastro de alunos, mantidos a partir de registros (structs), contendo as seguintes funções implementadas:</p>
<ol>
  <li>Cadastro de alunos</li>
  <li>Exibição de todos os alunos cadastrados</li>
  <li>Filtragem de alunos</li>
  <li>Exclusão de alunos</li>
  <li>Ordenação de alunos</li>
</ol>
<h2>Documentação dos registros:</h2>
<ul>
  <li>typedef struct data:</li><p>Registro responsável pela criação da data de nascimento do aluno. Essa struct possui três campos distintos sendo eles: dia, mês e ano.</p>    
  <li>typedef struct aluno:</li><p>Registro principal do projeto, sendo responsável pela criação e manipulação dos alunos. Essa estrutura possui cinco campos de dados: nome, sobrenome, data de nasimcneto (criado a partir da struct data), prontuário e curso.</p>    
</ul>
<h2>Documentação das constantes/variáveis globais:</h2>
<ul>
  <li>#define TAMNOME:</li><p>Constante utilizada para definir a largura máxima do vetor relacionado ao nome do aluno.</p>      
  <li>#define TAMSOBRENOME:</li><p>Constante utilizada para definir a largura máxima do vetor relacionado ao sobrenome do aluno.</p>      
  <li>alunos[1000]:</li><p>Variável vetorizada criada a partir do registro aluno, ou seja, cada posição desse vetor é um espaço para criação de um aluno com todos os campos presentes em sua respectiva struct.</p>
  <li>contador:</li><p>Variável do tipo inteiro iniciada com o valor 0, sua função é realizar a incrementação após cada cadastro, dessa forma, ela irá ter o valor correspondente à quantidade de alunos cadastrados.</p>
  <li>menorNome:</li><p>Variável do tipo inteiro inicada com o valor da constante TAMNOME, sua função é manter a quantidade de letras correspondente ao menor nome cadastrado, esse valor será importante para a função de ordenação alfabética de nome.</p>
  <li>menorSobrenome:</li><p>Variável do tipo inteiro inicada com o valor da constante TAMSOBRENOME, sua função é manter a quantidade de letras correspondente ao menor sobrenome cadastrado, esse valor será importante para a função de ordenação alfabética de sobrenome.</p>
  <li>menorCurso:</li><p>Variável do tipo inteiro inicada com o valor 4 (tamanho da largura do vetor curso, presente no registro aluno), sua função é manter a quantidade de letras correspondente ao menor curso cadastrado, esse valor será importante para a função de ordenação alfabética de curso.</p>
  <li>vetorNome:</li><p>Variável vetorizada do tipo inteiro, com largura máxima de 1000 posições (valor respectivo ao tamanho do vetor alunos), utilizada para armazenar o valor extraído dos nomes dos alunos com a finalidade de fazer a ordenação alfabética de nomes.</p>
  <li>vetorDias</li><p>Variável vetorizada do tipo inteiro, com largura máxima de 1000 posições (valor respectivo ao tamanho do vetor alunos), utilizada para armazenar o valor total de dias vividos dos alunos com a finalidade de fazer a ordenação de data de nascimento.</p>
  <li>vetorSobrenome:</li><p>Variável vetorizada do tipo inteiro, com largura máxima de 1000 posições (valor respectivo ao tamanho do vetor alunos)</p>
  <li>vetorCurso:</li><p>Variável vetorizada do tipo inteiro, com largura máxima de 1000 posições (valor respectivo ao tamanho do vetor alunos)</p>
</ul>
<h2>Documentação das funções:</h2>
<ul>
  <li>int menu( ):</li><p>Função responsável por realizar a impressão das funcionalidades do projeto. Após a impressão, é pedido ao usuário o comando desejado e o número correspondente a esse comando é retornado.</p>
  <li>void cadastro( ):</li><p>Função responsável pelo cadastramento dos alunos no vetor alunos[1000]. Para isso, são utilizadas funções de saída e entrada de informações (printf e scanf), com a finalidade de orientar e coletar as informações do usuário. É utilizada a variável contador para selecionar as posições do vetor alunos a serem escritas, no final da função essa variável é incrementada para que o próximo cadastro seja feito no próximo índice do vetor. Além disso, a função contém alguns loops para contagem de caracteres, para identificar a palavra com menor comprimento, para parar a contagem das letras é feita uma condicional para identificar se o valor é 0 (valor tradicionalmente inserido ao fim de um vetor de caracteres).</p>
  <li>void imprimirString(char string[ ]):</li><p>Função responsável por realizar a impressão de uma string, para isso é realizado um loop avançando e imprimindo cada caractere, o loop é quebrado ao encontrar o valor 0.</p>
  <li>void imprimirTodos( ):</li><p>Função responsável por imprimir todos os dados de todos os alunos cadastardos, além disso há uma condicional para verificar se há alunos cadastrados, caso não haja, a função retorna que não há nenhum aluno cadastrado na base de dados.</p>
  <li>void imprimirFiltrados(int TAMANHO, int filtrados[ ]):</li><p>Função responsável por imprimir apenas os alunos filtrados, para isso é necessário passar dois parâmetros obrigatórios, o tamanho do vetor de filtrados e o vetor contendo o índice dos alunos filtrados.</p>
  <li>int escolherFiltro( ):</li><p>Função responsável por informar ao usuário as opções de filtragem, semelhante a função menu( ), essa função também retorna o comando inserido.</p>
  <li>int filtragens( ):</li><p>Função responsável por realizar a filtragem, com auxílio das funções escolherFiltro( ) e imprimirFiltrados( ).</p>
  <li>void excluir(int TAMANHO, int filtrados[ ]):</li><p>Função responsável por realizar a exclusão dos alunos, os parâmetros requisitados são iguais ao da função imprimirFiltrados( ). Para realizar essa funcionalidade, a função zera os dados de todos os alunos filtrados, depois disso é feito um laço de repetição responsável por mover os alunos zerados ao fim do vetor. Por último, o contador é decrementado conforme o tamanho do vetor, fazendo com que o próximo cadastramento sobrescreva esses dados zerados.</p>
  <li>void filtrarExcluir( ):</li><p>Função responsável por integrar as funções de filtragem com a função de exclusão. Essa lógica foi implementada visando a filosofia DRY (don't repeat yourself).</p>  
  <h3>Funções do Algoritmo de ordenação por seleção (Selection-Sort):</h3>
  <ul>
  <li>void trocar(aluno alunos[ ], aluno alunos_menor[ ]):</li><p>Função responsável por realizar a troca de posições no vetor especificado, essa troca é feita com o auxílio de ponteiros, ou seja, a troca nessa função reflete na troca do vetor original. Para isso a função utiliza o vetor alunos e o menor valor dentro do vetor alunos.</p>
    <h4>Funções para ordenação por prontuário.</h4>
  <li>int menor_elemento(aluno alunos[ ], int n, int primeiro):</li><p>Função responsável por retornar o índice do menor elemento dentro do vetor para ser utilizado na função anterior.</p>  
  <li>int ordenar_selecao(aluno alunos[ ], int n):</li><p>Função responsável por integrar as função de menor_elemento( ) e trocar( ).</p> 
    <h4>Funções para ordenação por nome/sobrenome.</h4>
  <li>int menor_elemento2(int vetorNome[ ], int n, int primeiro):</li><p>Função com funcionamento semelhante à menor_elemento( ), no entanto recebe os parâmetros de nome e sobrenome.</p>
  <li>int ordenar_selecao2(int vetorNome[ ], aluno alunos[ ], int n):</li><p>Função igualmente semelhante à ordenar_selecao( ), no entanto utilizada para a ordenação por nome/sobrenome.</p>
    <h4>Funções para ordenação por data de nascimento.</h4>
  <li>int menor_elemento3(int vetorDias[ ], int n, int primeiro):</li><p>Função responsável por retornar o menor valor de data de nascimento</p>
  <li>int int ordenar_selecao3(int vetorDias[ ], aluno alunos[ ], int n):</li><p>Função responsável por fazer a integração de funções, com a finalidade de ordenação da data de nascimento.</p>  
  </ul>
  <li>int escolherOrdem( ):</li><p>Função responsável por retornar a opção requerida pelo usuário, semelhante à função menu( ).</p>
  <li>int conversor(char letra):</li><p>Função responsável por realizar a conversão de valor entre letras e números. Esse funcionamento será essencial para o funcionamento da função de ordenarNome( ).</p>
  <li>int conversorData(aluno alunos[ ], int i):</li><p>Função realizada por fazer a conversão de data (dd/mm/aaaa) em dias, funcionalidade responsável por fazer a ordenação de data de nascimento em ordem crescente.</p>
  <li>void ordenarNome( ):</li>Função responsável por realizar a ordenação alfabética de nome. Essa funcionalidade é feita a partir da função conversor( ). Para isso, é feito um laço de repetição, tendo como ponto de parada o valor do menor comprimento de nome, que percorre todas as letras da string, essas letras são submetidas à função de conversor( ) para retornar o valor da letra, essa valor é multiplicado por 1000 e a cada incrementação do laço esse valor é dividido por 50*k (k é a variável iteradora do laço). Essa conta é proposta para que o primeiro valor seja o mais relevante para o resultado final. Dessa maneira, quanto maior for o valor obtido, mais distante esse nome está do início da ordem alfabética.<p></p>
  <li>void ordenarSobrenome( ):</li><p>Função semelhante à anterior, feita com a mesma lógica, no entando, essa função é específica para ordenar o vetor a partir do sobrenome (ordem alfabética).</p>
  <li>void ordenarCurso( ):</li>Função também semelhante à ordenarSobrenome( ) e ordenarNome( ), no entanto, o resultado é refletido a partir dos valores do Curso.<p></p>
  <li>void ordenarAniversario( ):</li><p>Função responsável pel ordenação de data de nascimento, essa função é executada juntamente à função de conversorData( ). Após retornada o valor da data (em dias), esse valor é ordenado em ordem crescente, ou seja, do mais velho, para o mais novo.</p>
  <li>void ordenar( ):</li><p>Função esponsável por integrar todas as funções de ordenação, juntamente às funções de escolha do usuário.</p>
  <li>int main( ):</li><p>Função padrão para execução principal, todas as funções anteriores são integradas à essa, com a finalidade de deixá-la mais simples as funções presentes são as funções que integram suas microfunções com a finalidade de retorno especificado.</p>  
</ul>
