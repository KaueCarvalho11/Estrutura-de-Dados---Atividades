#include<stdio.h>

typedef struct pessoa{

    char nome [30];
    int documento;
    int idade;
} Pessoa;

void preenche (Pessoa * gente){

    printf("\nNome da pessoa:");
    scanf(" %[^\n]", &gente->nome);

    printf("\nNumero do documento da pessoa:");
    scanf ("%d", &gente->documento);

    printf ("\nIdade da pessoa:");
    scanf ("%d", &gente->idade);
}

void imprime (Pessoa * gente){

    printf("\n Dados informados da pessoa:");
    printf("\nNome: %s", gente->nome);
    printf("\nNumero do documento: %d", gente->documento);
    printf("\nIdade: %d", gente->idade);
}

void altera (Pessoa * gente){

    printf("\nAlterar idade da primeira pessoa cadastrada:");
    scanf ("%d", &gente->idade);

    printf ("\nIdade apos alteraçao: %d\n", gente->idade);
}

void maioremenor (Pessoa * gentes, int tamanho){


int i;
int velha = 0;
int nova = 0;

for (i = 0; i < tamanho; i++){

   if (gentes[i].idade > gentes[velha].idade){
    velha =  i;
   } 

   if (gentes[i].idade < gentes[nova].idade){
    nova = i;
   }

}
   printf("Pessoa mais velha: %s\n", gentes[velha].nome);
   printf("Pessoa mais nova: %s\n", gentes[nova].nome);

}

int main (){

    int n;
    
    printf("Quantidade de pessoas que se deseja cadastrar:");
    scanf("%d", &n);

    Pessoa gente[n];
    int i;
    
    for (i = 0; i < n; i++){
        preenche(&gente[i]);
    }

    for (i = 0; i < n; i++){
        imprime(&gente[i]);
    }

    altera(gente);
    maioremenor(gente, n);

    return 0;
}