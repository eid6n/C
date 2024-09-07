#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float altura, largura, area;
	
	printf("Insira a largura do seu triangulo: ");
	scanf("%f", &largura);
	
	printf("Insira a altura do seu triangulo: ");
	scanf("%f", &altura);
	
	area = (largura * altura) / 2;
	
	printf("A area do seu triangulo e: %.1f\n", area);
}