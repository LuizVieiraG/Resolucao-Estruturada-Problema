#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

//4.Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.

void lerMatriz(int matriz[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("\nInforme o valor da Matriz[%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

void maiorMatriz(int matriz1[TL][TC], int matriz2[TL][TC], int matrizMaior[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (matriz1[l][c] > matriz2[l][c]) {
                matrizMaior[l][c] = matriz1[l][c];
            } else {
                matrizMaior[l][c] = matriz2[l][c];
            }
        }
    }
}

void exibirMatriz(int matrizMaior[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("%d | ", matrizMaior[l][c]);
        }
        printf("\n");
    }
}

void main() {
    int matriz1[TL][TC], matriz2[TL][TC], matrizMaior[TL][TC];
    
	printf("\n<<Maiores Valores>>\n");
	
    printf("\nInforme a primeira matriz: \n");
    lerMatriz(matriz1);

    printf("\nInforme a segunda matriz: \n");
    lerMatriz(matriz2);

    maiorMatriz(matriz1, matriz2, matrizMaior);

    printf("\nA matriz com os maiores valores eh: \n");
    exibirMatriz(matrizMaior);
}
