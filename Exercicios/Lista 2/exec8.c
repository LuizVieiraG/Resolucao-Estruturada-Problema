#include <stdio.h>
#include <conio.h>

//8 - Escreva um algoritmo que tenha em seu programa principal a exibi��o de um menu de op��es 
//conforme abaixo:
//1 - Calcular Idade
//2 - M�dia de 3 Notas
//3 - Maior N�mero
//4 - Menor N�mero
//5 - Sair

//O usu�rio dever� escolher qual op��o deseja executar. 
//Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser exibida de advert�ncia e o menu 
//dever� ser exibido novamente para que seja escolhido uma nova op��o. 
//Para cada op��o escolhida, o algoritmo dever� chamar o procedimento correspondente a op��o, ou seja, 
//teremos no m�nimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o 
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

