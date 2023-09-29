#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4
//3.Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
//a) da linha 3
//b) da coluna 2
//c) de todos os elementos da matriz

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme os Numeros para Soma[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
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

void soma_matriz(int mat[TL][TC]){
	int l, c, soma_total = 0, soma_l3 = 0, soma_c2 = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(l==3){
				soma_l3 += mat[l][c];
			}
			if(c == 2){
				soma_c2 += mat[l][c];
			}
			soma_total += mat[l][c];
			
		}
	}
	printf("\n\nSoma da Matriz Linha 3: %d", soma_l3);	
	printf("\n\nSoma da Matriz Coluna 2: %d", soma_c2);	
	printf("\n\nSoma da Matriz Todos os Elementos: %d", soma_total);	
}

void main(){
	int mat[TL][TC];
	carregar_matriz(mat);
	exibir_matriz(mat);
	soma_matriz(mat);
}

