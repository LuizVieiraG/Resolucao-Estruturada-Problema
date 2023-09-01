#include <stdio.h>
#include <conio.h>

//5.	POR REFERÊNCIA: Escreva um procedimento que receba por parâmetro os valores de A e  B
// e retorne os valores invertidos, ou seja, A receberá o conteúdo de B e B receberá o 
//conteúdo de A. Os parâmetros deverão ser por referência.

void inverter_valores(int *a, int *b){
	int invert;
	invert = *a;
	*a = *b;
	*b = invert;
}

void main(){
	int a, b;
	printf("<<Inversão de Valores>>");
	printf("\nInforme o Valor de A: ");
	scanf("%d", &a);
	printf("\nInforme o Valor de B: ");
	scanf("%d", &b);
	inverter_valores(&a, &b);
	printf("\nInversor de Valor A: %d", a);
	printf("\nInversor de Valor B: %d", b);
}
