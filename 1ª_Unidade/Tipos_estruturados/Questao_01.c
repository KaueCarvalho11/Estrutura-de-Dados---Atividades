#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct ingresso {

    float preco;
    char local[50];
    char atracao[30];

}Ingresso;

void preenche(Ingresso * i);
void imprime(Ingresso * i);
void altera(Ingresso * i, float valor);
void maioremenor(Ingresso * i, int tamanho);

void preenche (Ingresso * i){

    printf("\nPreencha os dados do ingresso\n");

    printf("\nInforme o preço do ingresso: R$");
    scanf("%f", &i->preco);

    printf ("\nInforme o local da atração: ");
    scanf(" %[^\n]", i->local);

    printf("\nInforme qual será a atração: ");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso * i){

    printf("\nDados informados:\n");

    printf("\nPreço do ingresso: R$%.2f\n", i->preco);

    printf("\nLocal da atração: %s\n", i->local);

    printf("\nAtração: %s\n", i->atracao);
}

void altera(Ingresso* i, float valor){

    i->preco = valor;

    printf("\nValor do ingresso: $%2.f\n", i->preco);

}

void maioremenor(Ingresso *i, int tamanho) {
    int maior = 0;
    int menor = 0;

     for (int j = 1; j < tamanho; j++) {
        if (i[j].preco > i[maior].preco) {
            maior = j;
        }
        else if (i[j].preco < i[menor].preco) {
            menor = j;
        }
    }

    printf("\nAtração mais cara: %s (Preço: R$%.2f)", i[maior].atracao, i[maior].preco);
    printf("\nAtração mais barata: %s (Preço: R$%.2f)", i[menor].atracao, i[menor].preco);
}

    int main(void){

        int quantidade;

        Ingresso * ingresso = malloc(quantidade * sizeof(Ingresso));

        float valor;


         printf("\nQuantidade de ingressos a cadastrar: ");
        scanf("%d", &quantidade);

        Ingresso i[quantidade];
        int j;

        for (j = 0; j < quantidade; j++){
            preenche(&ingresso[j]);
        }

        for (j = 0; j < quantidade; j++){
            imprime(&ingresso[j]);
        }

        printf("\nInforme o novo valor do primeiro ingresso:");
        scanf("%f", &valor);

        altera(ingresso, valor);

        maioremenor(ingresso, quantidade);

        free(ingresso);

        return 0;
        
    }