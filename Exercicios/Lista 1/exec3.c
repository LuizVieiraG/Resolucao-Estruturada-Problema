#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima 
//na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

void main(){
	int i = 1, codigo;
	
	for(i = 1; i <= 10; i++){
	printf("<<Origem de Produto>>");
	printf("\nInforme o Codigo de Origem do Produto: ");
	scanf("%d", &codigo);
	}
}

