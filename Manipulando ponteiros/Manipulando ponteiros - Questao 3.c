#include <stdio.h>
int main(void) {
 int a, b, c, d;
 int *p1;
 int *p2 = &a; 
 //O endereço de "a" foi alocado em *p2.
 int *p3 = &c;
  //O endereço de "c" foi alocado em *p3.
 p1 = p2; 
 //O endereço "p2" foi alocado em "p1".
 *p2 = 10;
  //O conteúdo de "p2" recebe o valor "10", no caso, "a" passa a valer "10".
 b = 20;
  //A variável "b" recebe o valor "20".
 int **pp;
  //É declarado um ponteiro que pode armazenar o endereço de um ponteiro do tipo inteiro
 pp = &p1;
  //É atribuido o valor do endereço "p1" em "pp".
 *p3 = **pp;
 //É atribuido o valor de "pp" em "p3".
 int *p4 = &d;
 //É atribuido o valor de "d" em "p4".
 *p4 = b + (*p1)++;
  //O valor de "p4" passa a ser a soma entre o valor da variável "b" e o valor alocado em "p1". Após isso, é acrescentado uma unidade ao valor de "p1".
 printf("%d\t%d\t%d\t%d\n", a, b, c, d);
  //Assim, a = 11; b = 20; c = 10; d= 30
 return 0;
}

