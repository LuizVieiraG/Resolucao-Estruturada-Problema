#include <stdio.h>
#include <conio.h>

//5.	POR REFER�NCIA: Escreva um procedimento que receba por par�metro os valores de A e  B
// e retorne os valores invertidos, ou seja, A receber� o conte�do de B e B receber� o 
//conte�do de A. Os par�metros dever�o ser por refer�ncia.

void inverter_valores(int *a, int *b){
	int invert;
	invert = *a;
	*a = *b;
	*b = invert;
}

void main(){
	int a, b;
	printf("<<Invers�o de Valores>>");
	printf("\nInforme o Valor de A: ");
	scanf("%d", &a);
	printf("\nInforme o Valor de B: ");
	scanf("%d", &b);
	inverter_valores(&a, &b);
	printf("\nInversor de Valor A: %d", a);
	printf("\nInversor de Valor B: %d", b);
}
