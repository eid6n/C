#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float r, P, Pi;
	
	//atribuindo valor a pi
	Pi = 3.14;
	
	printf("Insira o valor de raio do seu circulo: ");
	scanf ("%f", &r);
	
	P = 2 * Pi * r;
	
	printf("Valor do perimetro: %2.2f\n ", P);
	
	return 0;
}