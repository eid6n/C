#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int nota1, nota2;
	double media;
	
	//entrada de dados
	
	printf("Digite a nota 1 do aluno: ");
	scanf("%d", &nota1);
	
	printf("Digite a nota 2 do aluno: ");
	scanf("%d", &nota2);
	
	//processamento de dados
	media = (nota1+nota2) /2;
	
	//saída 
	
	printf("A sua media e: %.1f\n", media);
	
	
	if(media >=7){
		printf("Aprovado");
	}
	else if(media >=4 && media<7){
		printf("Recuperacao");
	}
	else{
		printf("Reprovado");
	}
	return 0;
}