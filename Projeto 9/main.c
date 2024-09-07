#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	int soma(int numero1, int numero2){
		int resultado;
		
		resultado = numero1 + numero2;
		
		return resultado;
	} 
	
	int subtracao(int numero1, int numero2){
		int resultado;
		
		resultado = numero1 - numero2;
		
		return resultado;
	}
	
	int multiplicacao(int numero1, int numero2){
		int resultado;
		
		resultado = numero1 * numero2;
		
		return resultado;
	}
	
	int divisao(int numero1, int numero2){
		int resultado;
		
		resultado = numero1 / numero2;
		
		return resultado;
	}
	
	
	int num1, num2, opcao, resultado2;
	
	printf("digite numero 1: ");
	scanf("%d", &num1);
	
	printf("Digite numero 2: ");
	scanf("%d", &num2);
	
	printf("Escolha uma opcao de soma: \n");
	printf("-------------------------\n");
	printf("1 - Soma \n");
	printf("2 - Subtracao \n");
	printf("3 - Multiplicacao \n");
	printf("4 - Divisao \n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		resultado2 = soma(num1,num2);
	}
	else if(opcao == 2){
		resultado2 = subtracao(num1,num2);
	}
	else if(opcao == 3){
		resultado2 = multiplicacao(num1,num2);
	}
	else if(opcao == 4){
		resultado2 = divisao(num1,num2);
	}
	else{
		printf("Opcao invalida");
	}
	
	printf("O resultado e %d", resultado2);
	
	
	return 0;
}