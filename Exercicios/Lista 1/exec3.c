#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima 
//na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

void main(){
	int codigo;
	
	printf("<<Origem de Produto>>");
	printf("\nInforme o Codigo de Origem do Produto: ");
	scanf("%d", &codigo);
	
	switch(codigo){
		case 1:
			printf("\nSul");
		break;
		case 2:
			printf("\nNorte");
		break;
		case 3:
			printf("\nLeste");
		break;
		case 4:
			printf("\nOeste");
		break;
		case 5:
			printf("\nNordeste");
		break;
		case 6:
			printf("\nNordeste");
		break;
		case 7:
			printf("\nSudeste");
		break;
		case 8:
			printf("\nSudeste");
		break;
		case 9:
			printf("\nSudeste");
		break;
		case 10:
			printf("\nCentro Oeste");
		break;		
		case 11:
			printf("\nNoroeste");
		break;		
		default:
			printf("\nValor Invalido");		
	}	
}

