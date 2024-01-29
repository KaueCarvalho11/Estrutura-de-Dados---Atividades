#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int* vetor1, int* vetor2, int tamanho){
    
    int* resultado = (int*)malloc(tamanho * sizeof(int));

    
    if (resultado == NULL) {
        printf("Erro na alocação de memoria.\n");
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return resultado;
}

int main(){
    
    int vetor1 [] = {1, 2, 3, 4, 5};
    int vetor2 [] = {6, 7, 8, 9, 10};
    int tamanho = sizeof(vetor1) / sizeof(vetor1[0]);

    
    int* resultado = somaVetores(vetor1, vetor2, tamanho);

   
    printf("Vetor Resultado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(resultado);

    return 0;
}
