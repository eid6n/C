#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int soma1, soma2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &soma1);
	
	printf("Digite mais um numero: ");
	scanf("%d", &soma2);
	
	resultado = soma1 + soma2;
	
	printf("A soma dos dois numeros digitados e igual a: %d\n", resultado);
	
	return 0;
}