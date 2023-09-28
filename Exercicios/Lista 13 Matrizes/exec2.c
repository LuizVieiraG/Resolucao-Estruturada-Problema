#include <stdio.h>
#include <conio.h>


#define TL 4
#define TC 4

//2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário. Ao final ler um número informado 
//pelo usuário e procurar se o mesmo está na matriz.

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
			mat[l][c];	
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
		printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);	
		}
	}
}
void proc_matriz(int mat[TL][TC]){
	int l, c, receber, cont = 0;
	
	printf("\nInforme o numero que quer Encontrar na Matriz: ");
	scanf("%d", &receber);
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(receber == mat[l][c]){
				printf("\nNumero Esta na Matriz L: %d, C: %d", l, c);
				cont++;
			}	 
		}
	}
	if(cont == 0){
		printf("\nNao Encontrado!!");
	}	
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	proc_matriz(mat);
}
