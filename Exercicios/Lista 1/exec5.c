#include <stdio.h>
#include <conio.h>

//5.[FOR] Criar um algoritmo em que leia dez números inteiros e 
//imprima o maior e o segundo maior número da lista.


void main(){
	int i, num, maior_num = 0, seg_maior = 0;
	printf("<<Numeros Inteiros>>");
	
	for(i = 1; i <= 4; i++){
		printf("\nInforme um Numero: ");
		scanf("%d", &num);
		
		if(num > maior_num){
			seg_maior = maior_num;
			maior_num = num;	
		}else if(num > seg_maior && num < maior_num){
			seg_maior = num;
		}
	}
	printf("\nMaior Numero: %d", maior_num);
	printf("\nSegundo Maior Numero: %d", seg_maior);
}
