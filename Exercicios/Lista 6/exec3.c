#include <stdio.h>
#include <conio.h>

//3.	Escreva uma fun��o que 
//receba 2 parametros (Nota1 e Nota2) calcule e retorne a m�dia

float media_nota(float nota1, float nota2){
	float media;
	media = (nota1 + nota2) / 2;
	return media;
}
void main(){
	float media, nota1, nota2;
	printf("<<Media>>");
	printf("\nInforme Sua Nota 1: ");
	scanf("%f", &nota1);
	printf("\nInforme Sua Nota 2: ");
	scanf("%f", &nota2);
	media = media_nota(nota1, nota2);
	printf("\nMedia de Nota:  %0.2f", media);
}
