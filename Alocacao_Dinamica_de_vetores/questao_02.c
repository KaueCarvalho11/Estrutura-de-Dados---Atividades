#include<stdio.h>
#include<stdlib.h>

#define ALUNOS 10

 void saida(char *gabarito, char **alunos, int *n){

    float notas = 0;
    float acertos = 0;
    float aprovados = 0;

    for (int i = 0; i < ALUNOS; i++){

        notas = 0;
        acertos = 0;

        for (int j = 0; j < (*n); j++){

            if (alunos[i][j] == gabarito[j]){

                acertos++;
            }
        }
        notas = acertos * 10 / (*n);
        printf ("Aluno %d\n", i + 1);
        printf ("Nota %.2f\n", notas);

        if (notas >= 6){
            aprovados++;
        }
    }
    printf("Porcentagem de alunos aprovados: %% %.2f", (float) (aprovados / ALUNOS) * 100);
    }

    int main (){

        int n = 0;
        int i;
        int j;

        printf ("Quantidade de questões da prova:\n");
        scanf ("%d", &n);

        char *gabarito = (char *)malloc(n * sizeof(char));
        char **alunos = (char **)malloc(ALUNOS * sizeof (char*));

        for (i = 0; i < ALUNOS; i++){

            alunos[i] = (char*) malloc (n * sizeof(char));
        }
         for (i = 0; i < n; i++){

            printf ("Resposta da %d questão:", i + 1);
            scanf (" %c", &gabarito[i]);
         }
         for (i = 0; i < ALUNOS; i++){

            printf ("Respostas do %dº aluno:\n", i + 1);
            for (j = 0; j < n; j++){

                printf ("Resposta da %d questao:\n", j + 1);
                scanf (" %c", &alunos[i][j]);
            }
         }
         
         saida(gabarito, alunos, &n);
         free(gabarito);
         for (i = 0; i < ALUNOS; i++){
            free (alunos[i]);
         }
         free (alunos);
         return 0;
    }