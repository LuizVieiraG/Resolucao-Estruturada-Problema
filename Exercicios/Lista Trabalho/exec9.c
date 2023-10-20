#include <stdio.h>
#include <conio.h>

#define TL 3
#define TC 6

//9.	Faça programa que leia uma matriz 3 x 6 com valores reais.
//(a) Imprima a soma de todos os elementos das colunas ímpares.
//(b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
//(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
//(d) Imprima a matriz modificada.

void preencherMatriz(float matriz[TL][TC]) {
    int l, c;
    for(l = 0; l < TL; l++){
        for(c = 0; c < TC; c++){
            printf("\nInsira o valor [%d][%d]: \n", l, c);
            scanf("%f", &matriz[l][c]);
        }
    }
}

void imprimirMatriz(float matriz[TL][TC]) {
    int l, c;
    for(l = 0; l < TL; l++){
        for(c = 0; c < TC; c++){
            printf("%0.2f |", matriz[l][c]);
        }
        printf("\n");
    }
}

float SomarColunasImpares(float matriz[TL][TC]) {
    float soma = 0;
    int l, c;
    for(c = 0; c < TC; c += 2){
        for(l = 0; l < TL; l++){
            soma += matriz[l][c];
        }
    }
    return soma;
}

float calcularMediaColunas(float matriz[TL][TC]) {
    float soma = 0;
    int l, c;
    for (l = 0; l < TL; l++) {
        soma += matriz[l][1];
        soma += matriz[l][3];
    }
    return soma / (2 * TL);
}

void subSextaCol(float matriz[TL][TC]) {
    int l;
    for(l = 0; l < TL; l++){
        matriz[l][5] = matriz[l][0] + matriz[l][1];
    }
}

void main() {
    float matriz[TL][TC], somaColunasImpares, mediaColunas;
	printf("\n<<Numeros na Matriz>>\n");
	
    printf("\nInforme Numeros na matriz: \n");
    preencherMatriz(matriz);

    printf("\nMatriz Original: \n");
    imprimirMatriz(matriz);

    somaColunasImpares = SomarColunasImpares(matriz);
    printf("\nSoma das colunas impares: %0.2f\n", somaColunasImpares);
    mediaColunas = calcularMediaColunas(matriz);
    printf("Media das colunas 2 e 4: %0.2f\n", mediaColunas);
    subSextaCol(matriz);
    printf("\nMatriz Modificada: \n");
    imprimirMatriz(matriz);
}
