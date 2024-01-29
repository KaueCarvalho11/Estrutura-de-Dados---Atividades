#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union genero
{
    char masculino[30]; 
    char feminino[30];
    
}sexo;

typedef struct pessoa{
    char nome[30];
    int idade;
    sexo sex;
}Pessoa;

void preenche (Pessoa * p){

    printf("Informe os dados da pessoa:\n");

    printf ("Informe o nome:");
    scanf(" %[^\n]", p->nome);

    printf("\nInforme a idade:");
    scanf("%d", &p->idade);

}
void genero_homem (Pessoa * p){

    printf ("Gênero: %s", p->sex.masculino);
}
void genero_mulher (Pessoa * p){

    printf ("Gênero: %s", p->sex.feminino);
}

int main (void){
    
    Pessoa * pessoa = malloc( sizeof(Pessoa));
    preenche(pessoa);

    int opcao;

    printf("Informe o gênero: (1 - Masculino) ou (2 - Feminino)\n");
    scanf("%d", &opcao);

    if (opcao == 1){

    strcpy(pessoa->sex.masculino,"Masculino\n");
     genero_homem(pessoa);
}

    else if (opcao == 2){
     strcpy(pessoa->sex.feminino,"Feminino\n");
    genero_mulher(pessoa);
    }

    else {
        printf("Gênero: Não identificado\n");
    }

    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
  
    free(pessoa);
    return 0;
}