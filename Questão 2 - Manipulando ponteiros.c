#include<stdio.h>

int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);

}

/*
Se tentarmos compilar o programa (n�o o compile ainda), voc� acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem � de erro ou advert�ncia?
R = Mensagem de advert�ncia.

b) Por que o compilador emite tal mensagem?
R = Porque o ponteiro n�o aponta para nenhum endere�o em espec�fico.

c) Compile e execute o programa. A execu��o foi bem sucedida?
R = N�o.

d) Modifique o trecho de c�digo acima, de modo que nenhuma mensagem seja emitida
pelo compilador.
R = O programa acima se encontra modificado.

e) Compile e execute novamente o programa. A execu��o foi bem sucedida?
R = Sim.

*/
