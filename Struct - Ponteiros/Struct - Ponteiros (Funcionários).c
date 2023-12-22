#include<stdio.h>
#include<stdlib.h>

struct funcionario {
	char nome[50];
	int idade;
	char email [50];
	char cargo [50];
};

void preencher (struct funcionario * empregado);
void imprimir (struct funcionario * empregado);


int main (void) {
	
	struct funcionario * empregado = (struct funcionario*) malloc(sizeof(struct funcionario));
	
	if (empregado == NULL) {
		exit (1);
	}
	
	preencher (empregado);
	imprimir (empregado);
	free (empregado);
	return 0;
	
}

void preencher (struct funcionario * empregado){
	
	printf ("Informe os dados do funcionario\n");
	
	printf ("Nome: \n");
	scanf (" %[^\n]", empregado -> nome);
	
	printf ("Idade: \n");
	scanf ("%d", &empregado -> idade);
	
	printf ("Email: \n");
	scanf ("%s", empregado -> email);
	
	printf ("Cargo: \n");
	scanf (" %[^\n]", empregado -> cargo);	
}

void imprimir (struct funcionario * empregado) {
	
	printf ("Nome: %s\n Idade: %d\n Email: %s\n Cargo: %s", empregado->nome, empregado->idade, empregado->email, empregado->cargo);
}
	
