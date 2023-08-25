#include <stdio.h>
#include <conio.h>

//1.	POR REFERÊNCIA: Escreva um procedimento que receba 2 parâmetros (Nota1 e Nota2) calcule e 
//retorne também por parâmetro a média (Media).

void media_parametro(float nota1, float nota2, float *media){
	*media = (nota1 + nota2) / 2;
}
void main(){
	float nota1, nota2, media;
	printf("<<Media de Notas>>");
	printf("\nInforme sua Primeira Nota: ");
	scanf("%f", &nota1);
	printf("\nInforme sua Segunda Nota: ");
	scanf("%f", &nota2);

	media_parametro(nota1, nota2, &media);
	printf("\nMedia de Notas: %0.2f", media);
}
