#include<stdio.h>
#include<stdlib.h>

int main (void) {

    float somaM;
    float somaF;
    int j;
    int i;
    int N;

    printf("Informe o número de participantes a serem entrevistados\n");
    scanf ("%d", &N);

     char *sexo = (char *)malloc(N * sizeof(char));
      int *opiniao = (int *)malloc(N * sizeof(int));

      for (i = 0; i < N; i++)
      {

        printf ("Qual o sexo do  entrevistado? (M = Masculino) ou (F = Feminino)\n", i + 1);
        scanf (" %c", &sexo[i]);

        printf ("O entrevistado gostou? (0 - Gostou) ou (1 - Não gostou)\n");
        scanf("%d", &opiniao[i]);

    }
for (j = 0; j < N; j++)
    {
        
        if ((sexo[j] == 'F') && (opiniao[j] == 0))
        {
            somaF++;
        }
         
        if ((sexo[j] == 'M') && (opiniao[j] == 1))
        {
            somaM++;
        }
    }

    somaF = ((somaF * 100.0f) / N * 2); 
    somaM = ((somaM * 100.0f) / N * 2);  

     printf ("\n %.2f %% das mulheres gostaram do produto \n %.2f %% dos homens nao gostaram do produto \n", somaF, somaM);
    
    free(sexo);
    free(opiniao);

    return 0;
}