#include<stdio.h>

int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);

}

/*
Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem é de erro ou advertência?
R = Mensagem de advertência.

b) Por que o compilador emite tal mensagem?
R = Porque o ponteiro não aponta para nenhum endereço em específico.

c) Compile e execute o programa. A execução foi bem sucedida?
R = Não.

d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
pelo compilador.
R = O programa acima se encontra modificado.

e) Compile e execute novamente o programa. A execução foi bem sucedida?
R = Sim.

*/
