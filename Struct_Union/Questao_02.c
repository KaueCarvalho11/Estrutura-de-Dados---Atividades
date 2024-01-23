#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union Classes
{
    char alimento[30];
    char bebida[30];
    char eletronico[30];

}tipo;

typedef struct produto
{
    char nome[30];
    float preco;
    tipo classe;

}Produto;

 void preenche(Produto * p){

    printf ("Informe os dados do produto:\n");

    printf ("\nInforme o nome do produto:");
    scanf(" %[^\n]", p->nome);

    printf("\nInforme o preço do produto:");
    scanf("%f", &p->preco);
 };

 void classe_alimento (Produto * p){

    printf ("Tipo de produto: %s\n", p->classe.alimento);
 }

 void classe_bebida (Produto * p){

    printf("Tipo de produto: %s\n", p->classe.bebida);
 }

  void classe_eletronico (Produto * p){

    printf("Tipo de produto: %s\n", p->classe.eletronico);
  }

  int main(void){

    Produto * produto = malloc(sizeof(Produto));
    preenche(produto);

    int opcao;

    printf ("\nInforme o tipo de produto:\n");
    printf("(0 - Alimento) ou (1 - Bebida) ou (2 - Eletronico)\n");
    scanf("%d", &opcao);

    if (opcao == 0){

        strcpy(produto->classe.alimento, "Alimento");
        classe_alimento(produto);
    }

    else if (opcao == 1){
        strcpy(produto->classe.bebida, "Bebida");
        classe_bebida(produto);

    }

    else if (opcao == 2){
        strcpy(produto->classe.eletronico, "Eletrônico");
        classe_eletronico(produto);
    }

    else{
        printf("Tipo de produto não identificado");
    }

    printf("Nome: %s\n", produto->nome);
    printf ("Preço: R$%.2f\n", produto->preco);

    free(produto);
    return 0;
  }