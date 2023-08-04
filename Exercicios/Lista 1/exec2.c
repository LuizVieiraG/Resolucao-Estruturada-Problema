#include <stdio.h>
#include <conio.h>

//2.	Escreva um programa para ler as dimensões de uma cozinha retangular 
//(comprimento, largura e altura), calcular e escrever a quantidade de caixas 
//de azulejos para se colocar em todas as suas paredes (considere que não será 
//descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui 
//1,5 m2.

void main(){
	float comprimento, largura, altura, cozinha, azulejos;
	printf("<<Leitura de Dimensoes>>\n\n");
	printf("\nInforme o Comprimento: ");
	scanf("%f", &comprimento);
	printf("\nInforme a Largura: ");
	scanf("%f", &largura);
	printf("\nInforme a Altura: ");
	scanf("%f", &altura);
	
	cozinha = (altura * largura * 2) + (comprimento * altura * 2);
	
	azulejos = cozinha / 1.5;
	printf("\nMetros do comodo: %0.2f", cozinha);
	printf("\nQuantidade de Caixa: %0.2f", azulejos);
	
	
	
	
	
}
