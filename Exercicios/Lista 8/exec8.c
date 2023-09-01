#include <conio.h>
#include <stdio.h>

//8.	POR REFERÊNCIA: Escreva um procedimento que receba a Largura e o Comprimento 
//do quadrado/retângulo por parâmetro, calcule e retorne também por parâmetro a área (Area).

void calculo_area(float comprimento, float largura, float *area){
	*area = comprimento * largura;	
}

void main(){
	float comprimento, largura, area;
	printf("<<Area>>");
	printf("\nInforme Largura: ");
	scanf("%f", &largura);
	printf("\nInforme Comprimento: ");
	scanf("%f", &comprimento);
	
	calculo_area(comprimento, largura, &area);
	
	printf("\nArea: %0.2f", area);
	
	
}
