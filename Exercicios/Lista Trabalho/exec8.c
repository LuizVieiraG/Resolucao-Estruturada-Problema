#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

#define TL 5 
#define TC 5 
#define NUM_MAX 99

//8.	Fa�a um programa para gerar automaticamente n�meros entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela dever� conter 5 linhas de 5 n�meros, gere estes dados de modo a n�o ter n�meros repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
//Para fazer com que um n�mero 'x' receba um valor entre 0 e 99, fazemos:

//limite = 99
//x = ( rand() % limite) -> fun��o rand�mica que calcula um n�mero aleat�rio at� o limite
//usleep(100000) -> pausa o software por um per�odo de tempo. Necess�rio utilizar a biblioteca #include <unistd.h>



void inicializarNum(int numerosSorteados[]) {
    int c;
	for(c = 0; c <= NUM_MAX; c++) {
        numerosSorteados[c] = 0;
    }
}


void gerarCartela(int cartela[], int numerosSorteados[]) {
    int l, c, numero;
	for(l = 0; l < TL; l++) {
        for(c = 0; c < TC; c++){
            do {
                numero = rand() % (NUM_MAX + 1);
            } while (numerosSorteados[numero] == 1);

            cartela[l * TC + c] = numero;
            numerosSorteados[numero] = 1;
        }
    }
}

void exibirCartela(int cartela[]) {
    int l, c;
	for(l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("%2d ", cartela[l * TC + c]);
        }
        printf("\n");
    }
}

void main() {
    srand( (unsigned)time(NULL));
    int cartela[TL * TC], numerosSorteados[NUM_MAX + 1], i;
    

    inicializarNum(numerosSorteados);

    for(i = 1; i <= 5; i++){
    	printf("\n<<Numeros Randomicos para Bingo>>\n");
        gerarCartela(cartela, numerosSorteados);
        exibirCartela(cartela);
        usleep(90000);
    }

}




