#include <stdio.h>
#include <conio.h>

//2.	Escreva uma função que receba a data de nascimento de uma 
//pessoa (DataNascimento), calcule e retorne a idade.

int data_nas(int a, int b){
	int data;
	data = a - b;
	return data;
}

void main(){
	int data, a, b;
	printf("<<Idade>>\n");
	printf("\nInforme o Ano Atual: ");
	scanf("%d", &a);
	printf("\nInforme o Data de Nascimento: ");
	scanf("%d", &b);
	data = data_nas(a, b);
	printf("\nIdade: %d", data);
}
