#include<stdio.h>

int main(){
    int num,soma;
    printf("\n Digite um numero:");
    //para ler informação usamos o scanf, ele recebe informações do teclado
    scanf("%d",&num);
    printf( " \n\n Voce digitou num : %d ",num);
    soma= num + 5;
    printf("\n\nO valor da variavel 'num'+5: %d",soma);
    return 0;
}