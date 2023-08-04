#include <stdio.h>
#include <conio.h>

//4.	[FOR] Escreva um algoritmo em que leia 20 números
//e imprima a soma dos positivos e o total de números negativos. 

void main(){
	int i, num, cont_neg = 0, soma_pos = 0;
	printf("<<Positivos e Negativos>>");
	for(i = 1; i <= 4; i++){
		printf("\nInforme um Numero: ");
		scanf("%d", &num);
		
		if(num < 0){//negativo
			cont_neg++;	
		}
		else{//positivo
			soma_pos += num;
		}	
	}
	printf("\nQuantidade de Negativos: %d", cont_neg);
	printf("\nSoma dos Positivos: %d", soma_pos);
}
