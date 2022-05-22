# Curso estrutura de dados em C

## Conteúdo

- 1 - Introdução a Linguagem C
    - a. Variáveis e tipos de dados
    - b. Estrututa Condicionais
    - c. Laços de repetição
    - d. Funções
    - e.Vetores e Matrizes
- 2 - Ponteiros
- 3 - Structs
- 4 - Alocação Dinâmica
- 5 Listas filas e pilhas
- 6 Recursão
- 7 - Arvores


## Introdução

Estruturas de dados é uma área da Computação que trata da organização dos dados em estruturas, de forma a 
gerar melhor organização lógica e física desses dados.

Quando se trabalha com Estruturas de dados, a idéia é buscar agrupamento de dados, criação de tipagens de dados,e até mesmo definir novas operações entre essas estruturas, otimizando o armazenamento e o desempenho.

A estrutura de dados é utilizado muito em Jogos também.

## Estrutura básica de um programa em C

#include <stdio.h>

int main()
{

}

## Tipos de dados

Para lidar com diferentes dados, como números ou letras, precisaremos utilizar diferentes tipos de dados. Basicamente você irá lidar com:

- int: use para números inteiros, entre −32,767 e +32,767
- float: use para números de ponto flutuante (com parte decimal), como 1555.456 (para o computador o ponto é a vírgula)
- double: use para números de ponto flutuante bem grandes (tem duas vezes mais “espaço” que o float)
- char: use para caracteres, como “a”, “M”, etc

- int: use %d
- float: use %f
- double: use %lf
- char: use %c

Se estiver printando um número de ponto flutuante e quiser definir o número de casas decimais, pode usar %.2f, por exemplo, para limitar para duas casas decimai

## Estruturas de decisão IF

If é uma estrutura de definição que tem o objetivo de testar se a condição passado é verdadeira, caso seja ele entra dentro do bloco de IF, e dentro do bloco de IF caso não seja ele entra dentro do bloco de ELSE onde a decisão é satisfatória.

- Sintaxe:

if (condição)
{
	Comandos;
}
else
{
	Comandos;
}

##  Declaração SWITCH


SWITCH é uma declaração de múltipla escolha, diferente do if que caso tenha uma lista de escolha a ser montada não fica elegante e dependendo a extensão do programa fica difícil a manutenção.

 -Sintaxe
 Switch (variável)
{
	Case constante1:
	Comandos;
	Break;

Case constante2:
	Comandos;
	Break;

Case constante3:
	Comandos;
	Break;

default
	comandos;
}

- Variável: responsável pelo controle de escolhas.

- Constante: toda lista de escolha existe numerações para escolhas, no caso são chamadas de constantes.

- Break: Comando em C que para a execução do programa gerando um termino.

- Default: é executado caso nenhuma constante seja encontrada, não é obrigatório o uso desse comando.


## Estruturas de repetição

- Enquanto houver a condição x, faça isso: aqui utilizamos um while
- Repita x até que y: é o caso do for
- Faça x, enquanto houver a condição y: utilizamos o do...while

## Vetores

Usamos vetores para armazenar uma quantidade certa de dados do mesmo tipo. Declaramos assim:
Lembrando que o indice sempre começa do 0

#include <stdio.h>

int main()
{
    int tabuada[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char sexo[2];
    char iniciais = {"F", "G", "V"};
}

## Matrizes
Matriz é a uma estrutura de dados do tipo vetor com duas ou mais dimensões.

Os itens de uma matriz tem que ser todos do mesmo tipo de dado.

Na prática, as matrizes formam tabelas na memória.

## Linearidade e não linearidade

**Alocação**
- Quando criamos uma variável basicamente reservamos(alocamos) um local na memória RAM para essa variável.
- Cada tipo de dado demanda um determinado espaço para que a variável seja alocada em memória
- Tipo de dado interfere na alocação

char: 1 byte
int: 4 bytes
foat: 4 bytes
double: 8 bytes

## Alocação em memória RAM

- **Como um programa é alocado em memória RAM?** Quando o programa vai ser executado o Sistema Operacional é responsável por alocar esse espaço em memória, para que o processador possa executar o programa, é necessário que o mesmo esteja em memória RAM. Então quando o programa vai ser executado ele precisa vir do disco onde ele é uma entidade estática e apenas código em nosso HD, e aí ele será trazido pelo o Sistema Operacional  para a memória RAM, para que daí quando o processador for executar o programa possa ter acesso a ele. Ou seja ele passa a ser uma entidade dinâmica e não estatica como era no HD.

- **Como variáveis são alocadas em memória RAM?** As variáveis podem ser alocadas de forma continua, não continua, estáticas ou dinamicas.

- **Dados são todos alocados continuamente?** não, podemos ter dados continuos ou pode ser não continua. Um exemplo um array/vetor, ele é alocado continuamente na memória, sua posição fica uma do lado da outra, pois isso conseguimos acessar de forma fácil, pois é só mudar o índice do vetor. A alocação não continua nós podemos alocar os elementos em diferentes partes da memória e acessar eles posteriormente através de ponteiros;

- **Alocação é estática ou dinâmica?** estática é quando temos dados que são alocados estaticamente desde o início da criação do programa na memória RAM, a alocação dinamica ela se refere na alocação sob demanda, ou seja quando percebemos que precisamos de mais memória no desenvolvimento do programa, ou seja em tempo de execução.

Em linguagens de alto nível utilizamos estruturas e não nos importamos de que forma nossos dados são armazenados fisicamente.

## Alocação de Memória RAM na prática

![image](https://user-images.githubusercontent.com/52088444/169662858-2647a5a2-156d-4dfc-b4a7-4e0a4d74bb1a.png)

- Variaveis Locais/instruções do programa, variáveis locais: é onde fica a área de armazenamento fixo. As variaveis já existem desde o inicio do programa e não precisamos alocar as mesmas no meio do programa, ela já é de um determinado tipo e já está alocada na memória.

- Heap: vamos dizer que o Heap é a memória global do programa, ou seja memória livre, aquela que alocamos em tempo de execução. é o caso onde preciso de mais memória em uma estrutura de memória, então é nessa parte da memória que ficam essas variáveis.

- Pilha (Stack): Já a pilha de funções (stack) é uma área da memória que aloca dados/variáveis ou ponteiros quando uma função é chamada e desalocada quando a função termina. Podemos dizer então que representa a memória local àquela função. Variáveis Locais da função como parametros, ou seja elas só existem quando a função está executando, após finalizar a função ela deixa de existir, são variáveis que existem em determinado momento do programa. 

## O que é melhor alocar continuamente todos os dados do meu programa? ou alocar dinamicamente conforme demanda?

A resposta é que devemos avaliar o problema, se sabemos todas as variaveis que serão alocadas no programa é indicado alocação continua, mas caso não saibamos é indicado usar a alocação dinâmica sob demanda.

## Linearidade x Não linearidade

- Estruturas Lineares: sãoa quelas em que elementos estão alocados lado a lado na memoria RAM. eX: arrays,vetores.

- Estruturas não-lineares: são aquelas em que os elementos estão espalhados na memória, ou seja, não estão sequenciais. Então como saber onde elas estão? Para saber onde essas estruturas estão podemos guardar um ponteiro que aponte para elas. Cada estrutura portanto tem um ponteiro que aponta para si na memória RAM.


![image](https://user-images.githubusercontent.com/52088444/169663524-944bfa14-62db-421e-9458-9f84ceab56b2.png)

![image](https://user-images.githubusercontent.com/52088444/169663689-734571d0-8810-4ac0-9a6f-ef6c3c0680d5.png)

## Structs

Structs, também conhecidas como Registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado.

A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável. Por exemplo, se for preciso armazenar a altura, o peso e a idade de uma pessoa, pode-se criar uma struct chamada Pessoa e agrupar os dados em um único tipo de dado, conforme o exemplo a seguir.

Aos dados agruados em uma struct dá-se o nome de campos(fields).

As structs conseguem agrupar determinados tipos de dados dentro de uma uma unica estrutura, então conseguimos criar um novo tipo de dado. Assim como os objeto as structs terãoa tributos que sã as variaveis, as structs não armazena métodos.

Utilizamos o typedef que define o nome dos tipos de dados.

typedef struct pessoa Pessoa; -> estou renomeando pessoa para Pessoa.

## Ponteiros

Ponteiros é um recurso na linguagem C , por meio do qual podemos guardar endereços, seja uma variável, uma struct que esteja armazenada na memória RAM. Ponteiros é muito importante pois irá alocar as estruturas dinamicamente na memória RAM.

Os ponteiros são muito importantes quando queremos alocar informações dinamicas sob demanda que serão alocadas na memória heap.

## Alocação dinamica

Na alocação dinâmica podemos alocar espaços durante a execução de um programa, ou seja, a alocação dinâmica é feita em tempo de execução. Isto é bem interessante do ponto de vista do programador, pois permite que o espaço em memória seja alocado apenas quando necessário. Além disso, a alocação dinâmica permite aumentar ou até diminuir a quantidade de memória alocada.

- sizeof: A função sizeof determina o número de bytes para um determinado tipo de dados.
É interessante notar que o número de bytes reservados pode variar de acordo com o compilador utilizado.
Exemplo: x = sizeof(int); //retorna 4 no gcc

- malloc : para alocar dinamicamente nós usamos a função malloc, a mesma aloca um espaço de memória e retorna um ponteiro do tipo void para o início do espaço de memória alocado.

Quando usamos a função malloc ex: Ponto *p = malloc(sizeof(Ponto)); , a função malloc que vai alocar dinamicamente um espaço em memória, no exemplo acima quando executamos a função maloc a estrutura Ponto da qual vamos utilizar um ponteiro *p para apontar para ela, ela é alocada na nossa memória Heap, que éa memoria livre.


- free: A função free libera o espaço de memória alocado.

## Listas

Listas são comuns no dia a dia, lista nada mais é do que o conjunto de diversos elementos organizados em uma determinada sequencia, sendo passivel de inserções e remoções

## Listas encadeadas

Na computação uma lista é implementada como uma lsita encadeada. Um elementos é encadeado á outro de forma que cada elemento tem no maximo um elemento  subsequente e no maximo um elemento antecedente.
Em uma lista encadeada pode ocorrere inserções e remoções em quaisquer posições de uma lista. Encadeadas por que cada elementos está ligado ao outro.

Uma lista é implementada com a utilização de:
 - Structs: que representam cada um dos elementos da lista.
 - Ponteiros: realizam o encadeamento entre o elemento e outro.
 - Alocação Dinâmica: responsável por reservar espaço em tempo de execução para novos elementos da lista encadeada.

![image](https://user-images.githubusercontent.com/52088444/169707464-a13c51ea-74b8-4eac-9112-3837a3f898fe.png)

As setas em azul são os ponteiros , eles basicamente apontam para o próximo elemento da lista , e por eles que vou trafegar por dentro da lista.
As structs são os elemntos que temos e vamos criar, cada struct  vai ter um ponteiro que vai apontar para o próximo elemento gerando o encadeamento.


## Listas encadeadas na memoria RAM

![image](https://user-images.githubusercontent.com/52088444/169707466-0fc72406-61b6-4228-bce8-dab6cf9a586d.png)

Ao contrario dos vetores que são alocados continuamente na memória RAM, as listas encadeadas são alocadas em qualquer posição da memória RAM.

o laranjinha mostra a organização lógica e o azul mostra a localização fisica como estão na memória RAM.

- Pontos positivos
	- alocação sob-demanda;
	- Inserção e remoção no meio da estrutura , não necessita de realocação dos demais elementos já existentes
- POntos negativos
	- Estruturas não estão linearmente na memória, busca por elementos se torna mais onerosa
	- Inserção e remoção pode se tornar trabalhosa se a posição requerida está muito distante, necessidade de percorrer toda a lista para inserir ou remover;
