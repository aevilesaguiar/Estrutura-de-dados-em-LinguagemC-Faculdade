#include<stdio.h>
int main(){
//laço while
    int a = 0;
    printf("\nLaco While\n");
    while(a<5){
        printf("\nVariavel 'a' e: %d", a);
        a++;
    }


        int b = 0;
    printf("\n\nLaco doWhile\n");
    do{
 printf("\nVariavel 'b' e: %d", b);
        b++;
    }while(b<5);


printf("\n\nLaco For\n");

    for(int i=0;i<=5;i++){
        printf("\nVariavel 'i' e: %d", i);
    }


return 0;
}