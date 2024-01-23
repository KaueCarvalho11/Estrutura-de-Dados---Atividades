#include<stdio.h>
#include<stdlib.h>

typedef union documentos{
    
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa{

    char nome [30];
    int idade;
    Documentos doc;
}Pessoa;

void preenche (Pessoa * p){

    int opcao;

    printf("Informe o nome:\n");
    scanf(" %[^\n]", p->nome);

    printf("\nInforme a idade:");
    scanf("%d", &p->idade);

    printf ("Digite 1 para cpf ou 0 para RG:");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("Informe o cpf");
        scanf (" %[^\n]", p->doc.cpf);
    }
    else{
        printf ("Informe o rg");
        scanf(" %[^\n]", p->doc.rg);
    }
}

int main (void){
    Pessoa *pessoa = malloc(sizeof(pessoa));
    preenche(pessoa);

    printf ("CPF = %s\n", pessoa->doc.cpf);
    printf ("RG = %s\n", pessoa->doc.rg); 
    
    free(pessoa);

    return 0;
}