#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 3

//5.	Leia uma matriz de 3 x 3 elementos. Calcule a média dos elementos que estão na diagonal principal.

void lerMatriz(int matriz[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("Informe o valor da Matriz[%d][%d]: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

// Função para calcular a média dos elementos na diagonal principal
float mediaDiagonalPrincipal(int matriz[TL][TC]) {
    float soma = 0;
    int i;
    
    for (i = 0; i < TL; i++) {
        soma += matriz[i][i];
    }
    return soma / TL;
}

int main() {
    int matriz[TL][TC];
    
	printf("\n<<Media dos Elementos>>\n");
	
    printf("\nInforme os elementos da matriz: \n");
    lerMatriz(matriz);

    float media = mediaDiagonalPrincipal(matriz);

    printf("\n4A media dos elementos na diagonal principal eh: %0.2f\n", media);

    return 0;
}
