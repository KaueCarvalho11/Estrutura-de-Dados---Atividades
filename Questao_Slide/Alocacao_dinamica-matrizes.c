#include<stdio.h>
#include<stdlib.h>

int main (){

    int linhas = 5;
    int colunas = 5;
    int i;
    int j;

    int **matriz = (int**) malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas *sizeof(int));
    }
    
    for (i = 0; i < linhas; i++){

        for (j = 0; j < colunas; j++){
            matriz[i][j] = i * 5 + j;
        }
    }

    printf ("Matriz:\n");
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){

            printf("%2d ", matriz[i][j]);
        }
        printf ("\n");
    }
    
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;   
}