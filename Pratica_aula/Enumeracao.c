#include<stdio.h>

#define True 0
#define False 1

int main (void){
    int resposta;
    printf("Você gosta de algoritmos? \n 0 - True\n 1 - False\n");
    scanf ("%d", &resposta);

    if(resposta==True){
        printf("Boa escolha\n");
    }

    else if (resposta==False){
        printf("Que pena!\n");
    }

    return 0;

}