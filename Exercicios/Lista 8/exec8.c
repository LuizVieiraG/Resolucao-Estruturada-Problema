#include <conio.h>
#include <stdio.h>

//8.	POR REFER�NCIA: Escreva um procedimento que receba a Largura e o Comprimento 
//do quadrado/ret�ngulo por par�metro, calcule e retorne tamb�m por par�metro a �rea (Area).

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
