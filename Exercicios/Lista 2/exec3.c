#include <stdio.h>
#include <conio.h>

//3 - Escreva um procedimento que leia seu nome e em uma segunda variável leia seu sobrenome e ao 
//final exiba seu nome concatenado com seu sobrenome. Este procedimento deverá ser chamado através 
//do programa principal.

void exibir_nome(){
	char nome[20], sobrenome[30];;
	printf("Informe Seu Nome: ");
	scanf("%s", &nome);
	printf("Informe seu Sobrenome: ");
	scanf("%s", &sobrenome);
	printf("Nome completo: %s %s", nome, sobrenome);
}
void main(){
 	exibir_nome();
}
