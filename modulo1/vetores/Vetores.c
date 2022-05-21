#include<stdio.h>
int main(){

    int v[4];//vetor V de 4 elementos
    float v1[3];//vetor de v1 possui 3 posição de 0 a 2

    v[0]=45;
    v[1]=78;
    v[2]=9;
    v[3]=5;


    for (int i = 0; i < 3; i++)
    {
        printf("Digite um valor: ");
        scanf("%f",&v1[i]);
    }

    //para exibir
    for (int i = 0; i < 3; i++)
    {
       printf("O valor de v1[%d] = %.1f ",i,v1[i]);
    }
    
    

    

return 0;
}