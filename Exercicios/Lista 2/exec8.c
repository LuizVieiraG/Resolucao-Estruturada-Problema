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

void calcular_idade(){
	
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
		prinf("\nInforme Opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				calcular_idade();
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			default:
				printf("\nOpcao Invalida!");
		}
	}while(opcao != 5);
}
void main(){
	menu();
}


