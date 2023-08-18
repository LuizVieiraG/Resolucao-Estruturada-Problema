#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, que receba por parâmetro dois valores A e B, 
//calcule e retorne a soma dos valores.

int calcular_soma(int a, int b){
	int soma;//variavel nao pode ter mesmo nome de funcao ou procedimento
	soma = a + b;
	return soma;
}

void main(){
	int soma, a, b;
	printf("<<Soma de 2 Numeros>>\n");
	printf("\nInforme o Valor de A:");
	scanf("%d", &a);
	printf("\nInforme o Valor de B:");
	scanf("%d", &b);
	soma = calcular_soma(a, b);
	printf("Soma: %d", soma);	
}

