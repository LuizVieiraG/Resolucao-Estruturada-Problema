#include <stdio.h>
#include <conio.h>

//4.	Escreva uma função que receba a 
//Largura e o Comprimento do quadrado/retângulo, calcule e retorne a área.

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
