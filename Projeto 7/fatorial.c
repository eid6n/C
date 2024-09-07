#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int n, i, fat=1;
	
	printf("informe o valor de n: ");
	scanf("%d", &n);
	
	for(i=n; i>1; i--){
		fat = fat*i;
	}
	
	printf("O valor do fatorial de %d e %d\n", n, fat);
	
	return 0;
}