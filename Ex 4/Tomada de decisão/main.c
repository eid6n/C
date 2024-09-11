#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int numero, resposta;
	int contador = 0;
	
do	
{
	printf("Tabuada \n\n");
	printf("Digite o numero da tabuada: ");
	scanf("%d", &numero);
	// a linha abaixo gera um laço finito
	for(contador = 1; contador <= 10; contador++){ //o ++ significa incrementar de 1 em 1
		printf("%d x %d = %d\n", numero, contador, numero * contador);
		
	} //laço de repetição:
	printf("\n1 - Novo calculo\n");
	printf("2 - Sair\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");
	return 0;
}