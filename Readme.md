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

