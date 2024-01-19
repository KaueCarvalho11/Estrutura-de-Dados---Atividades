#include<stdio.h>

typedef struct funcionario {

    char nome [30];
    float salario;
    int identificador;
    char cargo[50];
} Funcionario;

void preenche (Funcionario * empregado){

printf ("\nNome do funcionario:");
scanf (" %[^\n]", &empregado->nome);

printf ("\nSalario do funcionario:");
scanf ("%f", &empregado->salario);

printf ("\nIdentificador do funcionario:");
scanf ("%d", &empregado->identificador);

printf ("\nCargo do funcionario:");
scanf(" %[^\n]", &empregado->cargo);
}

void imprime (Funcionario *empregado){

    printf("\nNome do funcionário: %s\n", empregado->nome);
    printf("\nSalario do funcionario: %.2f\n", empregado->salario);
    printf ("\nIdentificador do funcionário: %d\n", empregado->identificador);
    printf ("\nCargo do funcionário: %s\n", empregado->cargo);
}

void altera (Funcionario * empregado){

    printf("\nAlterar salário do primeiro funcionário cadastrado: ");
    scanf ("%f", &empregado->salario);

    printf ("\nSalário após a alteração: %.2f\n", empregado->salario);

}

void maioremenor(Funcionario * empregado, int tamanho){

    int i;
    int maior;
    int menor;

    for (i = 0; i < tamanho; i++){

            if (empregado[i].salario > empregado[maior].salario){
                maior = i;
            }
            
            if (empregado[i].salario < empregado[menor].salario){
                menor = i;
            }
    }
    printf("\nFuncionario com maior salario: %s", empregado[maior].nome);
    printf("\nFuncionario com menor salario: %s", empregado[menor].nome);
}

int main (void){

    int n;

    printf ("Quantidade de funcionários que se deseja cadastrar:");
    scanf ("%d", &n);

     Funcionario empregado[n];
     int i;

    for (i = 0; i < n; i++){
        preenche(&empregado[i]);
    }
    
    for (i = 0; i < n; i++){
        imprime(&empregado[i]);
    }

    altera(empregado);
    maioremenor(empregado, n);

    return 0;
}