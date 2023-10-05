#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

//1.	Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

void carregar_mat(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme Numeros Para Contar[%d][%d]: ", l , c);
			scanf("%d", &mat[l][c]);
		}
	}
}
void cont_matriz(int mat[TL][TC]){
	int l, c, cont = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(mat[l][c] > 10){
				printf("\nMatriz[%d][%d]: %d", l, c, mat[l][c]);
				cont++;
			}
		}
	}
	printf("\nTotal de Numeros Maiores que 10: %d", cont);
}

void main(){
	int mat[TL][TC];
	printf("\n<<Maiores que 10>>\n");
	carregar_mat(mat);
	cont_matriz(mat);
}


