#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int idade, dias;
	
	printf("Qual e a sua idade: ");
	scanf("%d", &idade);
	
	dias = idade * 365;
	
	printf("Baseado na sua idade, voce ja viveu %d dias!", dias);
	
	return 0;
}