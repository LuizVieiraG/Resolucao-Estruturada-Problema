#include <stdio.h>
#include <conio.h>

//4.	Escreva uma fun��o que receba a 
//Largura e o Comprimento do quadrado/ret�ngulo, calcule e retorne a �rea.

float area_comp(float largura, float comprimento){
	float area;
	area = (largura * comprimento);
	return area;
}
void main(){
	float area, largura, comprimento;
	printf("<<Area>>\n");
	printf("\nInforme Largura: ");
	scanf("%f", &largura);
	printf("\nInforme Comprimento: ");
	scanf("%f", &comprimento);
	area = area_comp(largura, comprimento);
	printf("\nArea: %0.2f", area);
	
}
