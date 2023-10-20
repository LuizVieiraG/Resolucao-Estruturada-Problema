#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//7.Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da 
//média da diagonal principal.

void lerMatriz(int matriz[TL][TC]) {
    int l, c;
    for(l = 0; l < TL; l++) {
    	for(c = 0; c < TC; c++) {
        	printf("\nDigite os elementos da matriz [%d][%d]: \n", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

int somaAbaixoMediaDiagonal(int matriz[TL][TC]) {
    int l, c, soma = 0, somaDiagonal = 0, cont = 0, mediaDiagonal;
    
    for (l = 0; l < TL; l++) {
        somaDiagonal += matriz[l][l];
    }

    mediaDiagonal = somaDiagonal / TL;

    for(l = 0; l < TL; l++) {
        for(c = 0; c < TC; c++) {
            if(l > c && matriz[l][c] < mediaDiagonal) {
            	soma += matriz[l][c];
                cont++;
            }
        }
    }

    return soma;
}

void main() {
    int matriz[TL][TC], resultado;
    printf("\n<<Abaixo da Media>>\n");
    
    lerMatriz(matriz);
    resultado = somaAbaixoMediaDiagonal(matriz);
    printf("A soma dos elementos abaixo da media da diagonal principal eh: [%d]\n", resultado);
}
