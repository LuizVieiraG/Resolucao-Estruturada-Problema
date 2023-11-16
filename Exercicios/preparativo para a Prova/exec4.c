#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

int soma_total(int mat[TL][TC]){
	int l, c, soma=0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			soma += mat[l][c]; 	
		}
	}
	return soma;	
}

int maior_ele(int mat[TL][TC]){
	int l, c, maior = 0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(maior <  mat[l][c]){
				maior = mat[l][c];	
			}	
		}
	}
	return maior;
}

int menor_ele(int mat[TL][TC]){
	int l, c, menor = 99999;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			if(menor >  mat[l][c]){
				menor = mat[l][c];	
			}	
		}
	}
	return menor;
}

float media_matriz(int mat[TL][TC]){
	int l, c;
	float media = 0, soma = 0;
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			soma += mat[l][c]; 	
		}
	}
	media = soma / (TL * TC);
	return media;
}

void carregar_mat(int mat[TL][TC]){
	int l, c;
	printf("\n<<Carregar Matriz>>\n");
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("\nInforme a Matriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);	
		}
	}	
}

void exibir_mat(int mat[TL][TC]){
	int l, c;
	printf("\n<<Exibir Matriz>>\n");
	for(l=0; l<TL; l++){
		for(c=0; c<TC; c++){
			printf("\nInforme a Matriz[%d][%d]: %d", l, c, mat[l][c]);	
		}
	}
}


void main(){
	int mat[TL][TC], soma, maior, menor;
	float media;
	carregar_mat(mat);
	exibir_mat(mat);
	soma = soma_total(mat);
	
	maior = maior_ele(mat);
	menor = menor_ele(mat);
	media = media_matriz(mat);
	printf("\nSoma Total: %d", soma);
	printf("\nMaior Matriz: %d", maior);
	printf("\nMenor Matriz: %d", menor);
	printf("\nMedia Matriz: %0.2f", media);
}
