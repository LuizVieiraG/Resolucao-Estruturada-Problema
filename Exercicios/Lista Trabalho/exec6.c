#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//6.Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima 
//média da diagonal principal.

void lerMatriz(int matriz[TL][TC]){
	int l, c;
    
    for (l = 0; l < TL; l++){
        for(c = 0; c < TC; c++) {
        	printf("\nDigite os elementos da matriz [%d][%d]: \n", l, c);
        	scanf("%d", &matriz[l][c]);
        }
    }
}


int somaAcimaMedia(int matriz[TL][TC]) {
    int l, c, soma = 0, cont = 0, somaDiagonal = 0, mediaDiagonal;

    for (l = 0; l < TL; l++) {
        somaDiagonal += matriz[l][l];
    }

    mediaDiagonal = somaDiagonal / TL;

    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (matriz[l][c] > mediaDiagonal) {
                soma += matriz[l][c];
                cont++;
            }
        }
    }

    return soma;
}

void main() {
    int matriz[TL][TC], resultado;
    printf("\n<<Acima da Media>>\n");
    
    lerMatriz(matriz);
    resultado = somaAcimaMedia(matriz);

    printf("A soma dos %d elementos acima da media da diagonal principal eh: [%d]\n", TC, resultado);

}
