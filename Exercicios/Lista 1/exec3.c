#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima 
//na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

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

