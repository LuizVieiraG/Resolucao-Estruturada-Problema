#include <stdio.h>
#include <conio.h>
#include <string.h>

//4.	Faça um programa que leia uma string do teclado e diga se ela é palíndrome. Uma string é palíndrome 
//quando pode ser lida tanto de trás pra frente quanto de frente para trás e possui exatamente a mesma 
//seqüência de caracteres. Ex.: ASA, SUBI NO ONIBUS. Desconsidere os espaços. Defina uma função chamada 
//Palindrome que receba uma string como parâmetro e retorne sim ou não no seu programa. Dica: Use a função 
//do exercício 1.

char inversaotext(char texto[2000]){
	int i, j, fim;
	char aux;
	
	fim = strlen(texto);
	for(i=0, j = fim - 1; i<j; i++, j--){
		aux = texto[i];
		texto[i] = texto[j];
		texto[j] = aux;	
	}
}


void main(){
	char texto[2000];
	
	printf("Informe Um Texto: ");
	gets(texto);
	inversaotext(texto);
	printf("\nInversao de Texto >> %s", texto);
}
