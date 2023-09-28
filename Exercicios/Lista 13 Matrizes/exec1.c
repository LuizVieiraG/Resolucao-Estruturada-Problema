#include <stdio.h>
#include <conio.h>


#define TL 3
#define TC 3

//1.Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.

void carregar_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += 10;
			mat[l][c] = soma;
		}
	}
}

void exibir_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += 10;
			printf("\nMat[%d][%d] = %d", l, c, mat[l][c]);
		}
	}
}
void soma_matriz(int mat[TL][TC]){
	int l, c, soma = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += mat[l][c];
		}
	}
	printf("\n\nSoma da Matriz: %d", soma);	
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	soma_matriz(mat);
}
