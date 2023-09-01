#include <stdio.h>
#include <conio.h>

//2.	POR VALOR - Faça um programa que simule um calculador de 4 operações. Seu programa devera:
//a.	ler dois números e o operador;
//b.	chamar procedimentos/função com passagem de parâmetros para efetuar os cálculos;
//c.	escrever o resultado ao final.


int cal_mult(int a, int b){
	int mult;
	printf("\nInforme Primeiro Numero: ");
	scanf("%d", &a);
	printf("\nInforme Segundo Numero: ");
	scanf("%d", &b);
	mult = a * b;
	return mult;
}
int cal_soma(int a, int b){
	int soma;
	printf("\nInforme Primeiro Numero: ");
	scanf("%d", &a);
	printf("\nInforme Segundo Numero: ");
	scanf("%d", &b);
	soma = a + b;
	return soma;
}
int cal_sub(int a, int b){
	int sub;
	printf("\nInforme Primeiro Numero: ");
	scanf("%d", &a);
	printf("\nInforme Segundo Numero: ");
	scanf("%d", &b);
	sub = a - b;
	return sub;
}
float cal_div(float c, float d){
	float div;
	printf("\nInforme Primeiro Numero: ");
	scanf("%f", &c);
	printf("\nInforme Segundo Numero: ");
	scanf("%f", &d);
	div = c / d;
	return div;
}
void menu(){
	int opcao, a, b;
	float c, d;
	do{
		system("cls");
		printf("<<Menu>>");
		printf("\n1 - Multiplicacao");
		printf("\n2 - Soma");
		printf("\n3 - subtracao");
		printf("\n4 - Divisao");
		printf("\n5 - Sair");
		printf("\nInforme a opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\n<<Multiplicacao>>: %d", cal_mult(a, b));
				break;
			case 2:
				printf("\n<<Soma>>: %d", cal_soma(a, b));
				break;
			case 3:
				printf("\n<<Subtracao>>: %d", cal_sub(a, b));
				break;
			case 4:
				printf("\n<<Divisao>>: %0.2f", cal_div(c, d));
				break;
			case 5:
				printf("Programa Finalizado\n");
				break;	
			default:
				system("cls");
				printf("\nOpcao Invalida!");
		}
		printf("\n\n");
		system("pause");
	}while(opcao != 5);
}

void main(){
	menu();		
}
