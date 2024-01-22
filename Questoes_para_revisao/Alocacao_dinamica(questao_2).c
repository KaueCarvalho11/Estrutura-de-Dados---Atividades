#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* concatena (char * string1, char* string2){

    char* resultado = (char*)malloc(strlen(string1) + strlen(string2) + 1);

    if (resultado == NULL) {
        printf ("Erro na alocacao de memoria");
    }

    strcpy(resultado, string1);

    strcat(resultado, string2);

    return resultado;
}

int main (){

    char* string1 = "Olá, ";
    char* string2 = "mundo! ";

    char*resultado = concatena(string1, string2);

    printf ("Resultado da concacetancao: %s\n", resultado);

    free (resultado);

    return 0;
}