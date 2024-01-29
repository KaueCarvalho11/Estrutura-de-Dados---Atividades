#include<stdio.h>
#include<stdlib.h>

typedef enum meses{

    janeiro = 01,
    fevereiro = 02,
    marco = 03,
    abril = 04,
    maio = 05,
    junho = 06,
    julho = 07,
    agosto = 8,
    setembro = 9,
    outubro = 10,
    novembro = 11,
    dezembro = 12

}Meses;

typedef struct data{

    int dia;
    Meses mes;
    int ano;

}Data;

void preencha (Data * d){


printf ("Insira a data:\n");

printf ("Informe o dia:");
scanf("%d", &d->dia );

printf ("Informe o mes:");
scanf("%d", &d->mes);

printf("Informe o ano");
scanf("%d", &d->ano);
}

void imprima (Data * d){

    printf ("Dados informados\n");

    printf("%d/  %d/ %d",d->dia, d->mes, d->ano);
    
}

int main (void){

    Data * d = malloc(sizeof(Data));

    preencha(d);
    imprima(d);
    free (d);
    return 0;
}
