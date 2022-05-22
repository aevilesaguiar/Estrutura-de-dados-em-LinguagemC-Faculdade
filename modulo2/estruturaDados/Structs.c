#include<stdio.h>

//struct agrupa varias informações de uma determinada entidade
struct pessoa{
    int idade;
    float altura;

};

typedef struct pessoa Pessoa;


int main(){

    Pessoa p;
    p.idade=36;
    p.altura=1.65;

    printf("A idade e %d e sua altura e %.2f ",p.idade, p.altura );

    
    return 0;
}