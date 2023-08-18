#include <stdio.h>
#include <conio.h>

//8 - Escreva um algoritmo que tenha em seu programa principal a exibição de um menu de opções 
//conforme abaixo:
//1 - Calcular Idade
//2 - Média de 3 Notas
//3 - Maior Número
//4 - Menor Número
//5 - Sair

//O usuário deverá escolher qual opção deseja executar. 
//Caso o usuário escolha uma opção inválida, uma mensagem deverá ser exibida de advertência e o menu 
//deverá ser exibido novamente para que seja escolhido uma nova opção. 
//Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, ou seja, 
//teremos no mínimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção 
//escolhida.

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
	float nota1, nota2, nota3, media, cont;
	printf("\nInforme Nota 1: ");
	scanf("%f", &nota1);
	printf("\nInforme Nota 2: ");
	scanf("%f", &nota2);
	printf("\nInforme Nota 3: ");
	scanf("%f", &nota3);
	cont = nota1 + nota2 + nota3;
	media = cont / 
	return media;
}
void menu(){
	int opcao;
	do{
		system("cls");
		printf("Informe a opcao: ");
		printf("\n1 - Calcular Idade");
		printf("\n2 - Media de 3 Notas");
		printf("\n3 - Maior Numero");
		printf("\n4 - Menor Numero");
		printf("\n5 - Sair");
		printf("\nInforme Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("<<Sua Idade>>: %d", calcular_idade());
				break;
			case 2:
				printf("<<Media>>: %f", media());
				break;
			case 3:
				
				break;
			case 4:
				
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

