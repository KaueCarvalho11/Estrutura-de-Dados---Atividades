#include<stdio.h>
#include<stdlib.h>

typedef enum genero{

    masculino,
    feminino

}Genero;

typedef struct pessoa{

    char nome[20];
    int idade;
    Genero genero_pessoa;

}Pessoa;

void preencha(Pessoa * pessoa){

    printf ("Informe os dados da pessoa:\n");

    printf("Informe o nome:\n");
    scanf("%[^\n]", pessoa->nome);

    printf("Informe a idade:\n");
    scanf("%d", &pessoa->idade);

    printf("Informe o gênero:\n 0 - Masculino\n 1 -Feminino ");
    scanf("%d", &pessoa->genero_pessoa);
    };

    void imprima (Pessoa * pessoa){

        printf("Dados informados:\n");

        printf("Nome: %s\n", pessoa->nome);
        printf("Idade: %d\n", pessoa->idade);
        printf("Gênero: %s\n",pessoa->genero_pessoa==masculino? "Masculino": "Feminino");
    }

    int main (void){

        Pessoa * pessoa = malloc(sizeof(pessoa));

        preencha(pessoa);
        imprima(pessoa);
        free(pessoa);
        return 0;    
    }