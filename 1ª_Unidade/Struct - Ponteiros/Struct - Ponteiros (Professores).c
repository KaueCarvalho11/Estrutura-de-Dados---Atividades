#include<stdio.h>
#include<stdlib.h>

struct professor {
	char nome [50];
	int idade;
	char disciplina[50];
	char email[50];
};

void preencher (struct professor * docente);
void imprimir (struct professor * docente);

int main (void) {
	
	struct professor * docente = (struct professor*) malloc(sizeof(struct professor));
	
	if (docente == NULL){
		exit (1);
	}
	
	preencher (docente);
	imprimir (docente);
	free (docente);
	return 0;
}

void preencher (struct professor * docente){


printf ("Informe dados do professor: \n");

printf ("Nome:\n");
scanf (" %[^\n]", docente -> nome);

printf ("Idade:\n");
scanf ("%d", &docente -> idade);

printf ("Disciplina lecionada:\n");
scanf (" %[^\n]", docente -> disciplina);

printf ("Email:\n");
scanf ("%s", docente -> email);
}

void imprimir (struct professor * docente){
	
	printf ("Nome: %s\n Idade: %d\n Disciplina: %s\n Email: %s\n", docente->nome, docente->idade, docente->disciplina, docente->email);
}
