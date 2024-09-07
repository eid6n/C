#include <stdio.h> 
#include <stdlib.h>

int main(){
    float C, F;

    printf("Insira uma temperatura em Celsius: ");
    scanf("%f", &C);

    F = (C * 9/5) + 32;

    printf("A temperatura convertida e: %.2f", F);

    return 0;
}