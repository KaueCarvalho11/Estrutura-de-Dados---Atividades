#include<stdio.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro);

int main () {
	
	float area, perimetro, lado;
	
	 printf("Medida do lado do hexagono: ");
    scanf("%f",&lado);

    calcula_hexagono(lado, &area, &perimetro);

    printf("Área do hexagono: %.2f\n",area);
    printf("Perimetro do hexagono: %.2f\n", perimetro);
}

void calcula_hexagono(float l, float *area, float *perimetro){


*area = (3 *pow(l,2) * sqrt(3))/2;
    *perimetro = 6 * l;
}
