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
  <li>void cadastro( ):</li><p>Função responsável pelo cadastramento dos alunos no vetor alunos[1000]. Para isso, são utilizadas funções de saída e entrada de informações (printf e scanf), com a finalidade de orientar e coletar as informações do usuário. É utilizada a variável contador para selecionar as posições do vetor alunos a serem escritas, no final da função essa variável é incrementada para que o próximo cadastro seja feito no próximo índice do vetor. Além disso, a função contém alguns loops para contagem de caracteres, para identificar a palavra com menor comprimento, para parar a contagem das letras é feita uma condicional para identificar se o valor é 0 (valor tradicionalmente inserido ao fim de um vetor de caracteres)</p>
  <li>void imprimirString(char string[ ]):</li><p></p>
  <li>void imprimirTodos( ):</li><p></p>
  <li>void imprimirFiltrados( ):</li><p></p>
  <li>int escolherFiltro( ):</li><p></p>
  <li>int filtragens( ):</li><p></p>
  <li>void excluir( ):</li><p></p>
  <li>void filtrarExcluir( ):</li><p></p>  
  
</ul>
