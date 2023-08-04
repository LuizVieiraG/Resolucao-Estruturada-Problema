#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima 
//na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

void main(){
	int i = 1, codigo;
	
	for(i = 1; i <= 10; i++){
	printf("<<Origem de Produto>>");
	printf("\nInforme o Codigo de Origem do Produto: ");
	scanf("%d", &codigo);
	}
}

