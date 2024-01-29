#include<stdio.h>
#include<stdlib.h>


struct aluno {

	char nome[20];
	int idade;
	long int matricula;
	char email[50];
};

void preenche (struct aluno * estudante);
void imprime (struct aluno * estudante);

int main (void){
	
	struct aluno * estudante = (struct aluno*) malloc(sizeof(struct aluno));
	
	if (estudante == NULL) {
		exit (1);
	}	
	
		
	preenche(estudante);
	
	imprime (estudante);
	
		free (estudante);
	
	return 0;
		
	}
	void preenche (struct aluno * estudante){
		
	printf ("Digite o nome do aluno\n");
	scanf ("%s", estudante -> nome);
	
	printf ("Idade:\n");
	scanf ("%d", &estudante -> idade);
	
	printf ("Email:\n");
	scanf ("%s", estudante -> email);
	
	printf ("Matricula\n");
	scanf ("%d", &estudante -> matricula);		
	}
	
	void imprime (struct aluno * estudante){
		
		printf ("Nome: %s\n Idade: %d\n matricula: %d\n Email: %s\n", estudante->nome, estudante->idade, estudante->matricula, estudante->email);
	}
	
