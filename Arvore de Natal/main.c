#include <stdio.h>
#include <stdlib.h>

int i, j, star, tamanho;

int main(int argc, char *argv[]) {
	//desenhando árvore de natal
	
	
	printf("Feliz Natal!!\n");
	printf("-------------\n");
	printf("Tamanho: ");
	scanf("%d", &tamanho);
	printf("\n");
	
	//definindo tamanho da árvore (laço principal)
	for(i = 1; i <= tamanho; i++) {
		//laço que define o espaçamento
		for(j = 1; j <= tamanho - i; j++){
			printf(" ");
		}
		
		//laço que desenha a árvore
		for(star = 1; star <= i*2-1; star++){
		printf("*");
	}
		printf("\n");
	}
	
	printf("\n");
	system("pause");
	
	
	return 0;
}