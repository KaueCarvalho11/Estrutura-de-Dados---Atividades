#include<stdio.h>
#include<stdlib.h>

struct ContaBancaria{
    char NomeCliente [30];
    int NumeroConta;
    float saldo;
};

void preenche (struct ContaBancaria * conta){

    printf ("Informe os dados do cliente.\n");

    printf("\nNome:");
    scanf (" %[^\n]", &conta->NomeCliente);

    printf("\nNumero da conta:");
    scanf("%d", &conta->NumeroConta);

    printf("\nSaldo:");
    scanf("%f", &conta->saldo);
}

void imprime (struct ContaBancaria * conta){

    printf("\nDados fornecidos do cliente");
    
    printf ("\nNome: %s\n", conta->NomeCliente);
    printf("\nNumero da conta: %d\n", conta->NumeroConta);
    printf("\nSaldo: %.2f\n", conta->saldo);
}

void deposito(struct ContaBancaria * conta, float valor){

conta->saldo += valor;

}

int main (void){

    float valor;

    struct ContaBancaria * conta = (struct ContaBancaria*) malloc(sizeof(struct ContaBancaria));

    if (conta == NULL){
        exit (1);
    }

    printf("Cadastro de conta.\n");
    preenche(conta);
    imprime(conta);
    
    printf("\nDeposite um valor de sua preferencia: ");
    scanf(" %f", &valor);
    deposito(conta, valor);
    imprime(conta);

    free(conta);
    return 0;
    
}
