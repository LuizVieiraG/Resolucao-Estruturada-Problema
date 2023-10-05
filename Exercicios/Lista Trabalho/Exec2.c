#include <stdio.h>
#include <conio.h>

#define TL 5
#define TC 5

//Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. 
//Escreva ao final a matriz obtida

void carregar_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme Numeros[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
			if(l == c){
				mat[l][c] = 1; 
			}
			else{
				mat[l][c] = 0;
			}
		}
	}
}
void exibir_matriz(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("%d | ", mat[l][c]);			
		}
		printf("\n");
	}
	
}

void main(){
	int mat[TL][TC];
	printf("\n<<Troca de 0 e 1 em Diagonal>>\n");
	carregar_matriz(mat);
	exibir_matriz(mat);
}
