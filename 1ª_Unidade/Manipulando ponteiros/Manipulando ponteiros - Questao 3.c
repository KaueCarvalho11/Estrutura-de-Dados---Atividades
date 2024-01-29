#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a; 
 //O endere�o de "a" foi alocado em *p2.
 int *p3 = &c;
  //O endere�o de "c" foi alocado em *p3.
 p1 = p2; 
 //O endere�o "p2" foi alocado em "p1".
 *p2 = 10;
  //O conte�do de "p2" recebe o valor "10", no caso, "a" passa a valer "10".
 b = 20;
  //A vari�vel "b" recebe o valor "20".
 int **pp;
  //� declarado um ponteiro que pode armazenar o endere�o de um ponteiro do tipo inteiro
 pp = &p1;
  //� atribuido o valor do endere�o "p1" em "pp".
 *p3 = **pp;
 //� atribuido o valor de "pp" em "p3".
 int *p4 = &d;
 //� atribuido o valor de "d" em "p4".
 *p4 = b + (*p1)++;
  //O valor de "p4" passa a ser a soma entre o valor da vari�vel "b" e o valor alocado em "p1". Ap�s isso, � acrescentado uma unidade ao valor de "p1".
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
  //Assim, a = 11; b = 20; c = 10; d= 30
 return 0;
}

