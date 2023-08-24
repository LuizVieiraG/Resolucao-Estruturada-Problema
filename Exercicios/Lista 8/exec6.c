#include <stdio.h>
#include <conio.h>

//6.	POR REFERÊNCIA: Escreva um procedimento que receba a data de nascimento de uma pessoa
//(DataNascimento), a data atual calcule a idade e retorne (Idade) por parâmetro.

void idade_parametro(int a, int b, int *idade){
	*idade = a - b;
}

void main(){
	int a, b, idade;
	printf("\n<<IDADE>>");
	printf("\nInforme Data Atual: ");
	scanf("%d", &a);
	printf("\nInforme Data de Nascimento: ");
	scanf("%d", &b);
	idade_parametro(a, b, &idade);
	printf("\nIdade: %d", idade);	
}
