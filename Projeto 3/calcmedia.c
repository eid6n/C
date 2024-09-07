#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, nota3, media;
    char nome[15];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    do{
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1); 
    }while (nota1 < 0 || nota1 > 10);
    
    do
    {
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    }while(nota2 < 0 || nota2 > 10);

    do
    {
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    } while (nota3 < 0 || nota3 > 10);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Ola, %s! A media final de sua nota foi %.1f\n", nome, media);
}