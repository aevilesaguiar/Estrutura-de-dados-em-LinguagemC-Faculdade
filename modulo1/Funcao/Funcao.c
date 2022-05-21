#include<stdio.h>

float soma(int a, int b){
    return a+b;
}


int subtracao(int a, int b){
    return a-b;
}

 int main(){

    int res, n1,n2 , op;

    int fim=0;
    while(fim ==0){
    printf("\nDigite um valor");
    scanf("%d",&n1);

    printf("Digite um valor");
    scanf("%d",&n2);

    printf("Escolha a operação: \n1-Adicao \n2-subtracao ");
    scanf("%d",&op);
    if(op==1){
            res=soma(n1,n2);
    }
    if(op==2){
            res=subtracao(n1,n2);
    }
   
    printf("O resultado e: %d \n\n",res);
    printf("\n0-Continuar \n1-Parar\n");
    scanf("%d",&fim);
    
}
  return 0;
 }
  
