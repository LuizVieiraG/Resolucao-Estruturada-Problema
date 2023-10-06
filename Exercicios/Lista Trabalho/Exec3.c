#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

//3.	Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do 
//maior valor.

void carregar_mat(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme a Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
}
void exibir_matriz(int mat[TL][TC]){
	int l, c, mat_maior=0, linha_maior, coluna_maior;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(mat[l][c] > mat_maior){
				mat_maior = mat[l][c];
				linha_maior = l;
				coluna_maior = c;
			}
		}
	}
	printf("\nMaior Linha e Coluna[%d][%d]: %d", linha_maior, coluna_maior, mat_maior);
}


void main(){
	int mat[TL][TC];
	carregar_mat(mat);
	exibir_matriz(mat);
}
