#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//4.	Carregar uma matriz 3x3 com número inteiros, gerar uma nova matriz com os 
//número da matriz carregada, multiplicados por 2.

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("<<Informe os Numeros para Mult[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
}
void mult_matriz(int mat[TL][TC], int mat_mult[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			mat_mult[l][c] = mat[l][c] * 2; 
		}
	}
}
void exibir_matriz(int mat_mult[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nValores Multiplicados[%d][%d]: %d", l, c, mat_mult[l][c]);
		}
	}
}
void main(){
	int mat[TL][TC], mat_mult[TL][TC];
	carregar_matriz(mat);
	mult_matriz(mat, mat_mult);
	exibir_matriz(mat_mult);
	
}
