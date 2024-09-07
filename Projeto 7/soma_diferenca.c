#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	
	printf("Digite mais um numero: ");
	scanf("%d", &num2);
	
	resultado = num1 - num2;
	
	printf("A diferenca entre os numeros e igual a %d", resultado);
	
	return 0;
}