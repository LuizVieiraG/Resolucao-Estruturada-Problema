#include <stdio.h>
#include <conio.h>

//3 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções conforme abaixo:
//1 - Calcular Idade
//2 - Média de 4 Notas
//3 - Multiplicação de 2 Número
//4 - Divisão de 2 Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar a função correspondente a opção, ou seja, teremos no mínimo 4 funções diferentes no algoritmo.
//Cada função deverão ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida. Retornar e exibir o resultado no programa principal.


int calcular_idade(){
	int aa, an, idade;
	printf("Informe o Ano Atual: ");
	scanf("%d", &aa);
	printf("Informe o Ano de Nascimento: ");
	scanf("%d", &an);
	idade = aa - an;
	return idade;	
}
float media(){
	float nota1, nota2, nota3, nota4, media, cont;
	printf("\nInforme Nota 1: ");
	scanf("%f", &nota1);
	printf("\nInforme Nota 2: ");
	scanf("%f", &nota2);
	printf("\nInforme Nota 3: ");
	scanf("%f", &nota3);
	printf("\nInforme Nota 4: ");
	scanf("%f", &nota4);
	cont = nota1 + nota2 + nota3 + nota4;
	media = cont / 4;
	return media;
}
int mult_num(){
	int num1, num2, mult;
	printf("\nInforme Primeiro Numero: ");
	scanf("%d", &num1);
	printf("\nInforme Segundo Numero: ");
	scanf("%d", &num2);
	mult = num1 * num2;
	return mult;
	
}
float div_num(){
	float num1, num2, div;
	printf("\nInforme Primeiro Numero: ");
	scanf("%d", &num1);
	printf("\nInforme Segundo Numero: ");
	scanf("%d", &num2);
	div = num1 / num2;
	return div;	
}
void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a opcao: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 4 Notas");
		printf("\n3 - Multiplicacao de 2 Numeros");
		printf("\n4 - Divisao de 2 Numeros");
		printf("\n5 - Sair");
		printf("\nInforme Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\n<<Sua Idade>>: %d", calcular_idade());
				break;
			case 2:
				printf("\n<<Media>>: %0.2f", media());
				break;
			case 3:
				printf("\n<<Multiplicacao>>: %d", mult_num());
				break;
			case 4:
				printf("\n<<Divisao>>: %0.2f", div_num());
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

