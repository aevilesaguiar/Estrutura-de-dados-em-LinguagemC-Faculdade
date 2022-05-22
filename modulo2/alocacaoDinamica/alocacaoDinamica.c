#include<stdio.h>
#include<stdlib.h>

struct ponto{
    float x;
    float y;
};

typedef struct ponto Ponto;



int main(){

//(Ponto*) é a conversão do Ponto para o ponteiro *p
    Ponto *p = (Ponto*)malloc(sizeof(Ponto)); //ponteiro que vai apontar para uma estrutura do tipo ponto
    p->x=1; //quando utilizamos ponteiros agora utilizamos a flecha e não mais o ponto(.)
    p->y=5;


    printf("Ponto = (%.2f,%.2f)",p->x,p->y);
    return 0;
}