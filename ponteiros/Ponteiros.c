#include<stdio.h>
//criar um ponteiro que vai apontar para a variavel val, com o mesmo tipo
int *p;
int val = 5;


int main(){


    p=&val;

    printf("O valor apontado por 'p'e: %d",*p);


    return 0;
}