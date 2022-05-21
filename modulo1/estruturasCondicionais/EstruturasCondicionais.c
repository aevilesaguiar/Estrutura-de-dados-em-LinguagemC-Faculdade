#include<stdio.h>
int main(){

int a;
printf("Digite um numero: ");
scanf("%d", &a);

//== comparação de igualdade
// > comaparação de maior
//< comparação de menor
// >= comparação de maior  ou igual
//<= comparação de menor igual
//!= comparação de diferença

if(a==0){
    printf("A variavel'a' e 0 ");
}else{
    printf("A variavel'a' e diferente de 0 ");
}


return 0;
}