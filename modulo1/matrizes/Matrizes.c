#include<stdio.h>
int main(){
int mat[2][3]; //matriz 2x3 duas linhas e 3 colunas

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("Digite um numero:");
        scanf("%d",&mat[i][j]);
        
    }
    
}

//Exibir os elementos da matriz


for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        printf("\nO valor de mat[%d][%d]=%d",i,j,mat[i][j]);
        
    }
    
}


return 0;
}