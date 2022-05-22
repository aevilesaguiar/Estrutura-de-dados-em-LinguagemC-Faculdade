#include<stdio.h>
//criar um ponteiro que vai apontar para a variavel val, com o mesmo tipo
int *p;
int val = 5;


int main(){

    //fazendo o apontamento de para o endereco(&) de val
    p=&val;

    printf("O valor apontado por 'p'e: %d",*p);

    return 0;
}