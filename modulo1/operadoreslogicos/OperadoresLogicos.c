#include<stdio.h>
int main(){

int a, b,c;
printf("Digite um numero:");
scanf("%d",&a);
printf("Digite um numero:");
scanf("%d",&b);
printf("Digite um numero:");
scanf("%d",&c);

// || operador lógio, ambos ou pelo o menos 1 verdadeiro
//!= operador lógico não, inverte o valor logico das operações se for true ele muda para falso, se for falso muda para true
//&& operador lógico && obriga todas as condições serem verdadeiras
if(a==b && b==c){
 
        printf("a,b,c tem valores iguais");
}else{
    printf("Tem valores diferentes");
}

return 0;
}