#include <stdio.h>
#include <conio.h>

//1 - Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. Est� 
//fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

int soma_numeros(){
	int num1, num2, soma;
	printf("<<Soma dos Numeros>>\n");
	printf("\nInforme Um Numero: ");
	scanf("%d", &num1);
	printf("\nInforme Um Numero: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	return soma;	
}
void main(){
	int soma;
	soma = soma_numeros();
	printf("\nSoma: %d", soma);
}
