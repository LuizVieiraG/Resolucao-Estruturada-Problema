#include <stdio.h>
#include <conio.h>

//4.	Escreva uma função que receba a 
//Largura e o Comprimento do quadrado/retângulo, calcule e retorne a área.

float area_comp(float largura, float comprimento){
	float area;
	area = (largura * comprimento) / 2;
	return area;
}
void main(){
	float area, largura, comprimento, area_cont;
	printf("<<Area>>\n");
	printf("\nInforme Largura: ");
	scanf("%f", &largura);
	printf("\nInforme Comprimento: ");
	scanf("%f", &comprimento);
	area_cont = largura * comprimento;
	area = area_comp(largura, comprimento);
	printf("\nValor Total: %0.2f\n", area_cont);
	printf("\nArea: %0.2f", area);
	
}
