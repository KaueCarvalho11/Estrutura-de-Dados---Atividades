#include<stdio.h>

typedef union tipodados
{
    int meu_int;
    float meu_float;
}Dados;

int main (void){

    Dados uniao;
    printf ("Digite os dados: ");
    scanf("%d %f", &uniao.meu_int, &uniao.meu_float);

    printf ("Dados informados: meu_int = %d meu_float = %.2f", uniao.meu_int, uniao.meu_float);
    
    return 0;
}
