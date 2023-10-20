#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

#define TL 5 
#define TC 5 
#define NUM_MAX 99

//8.	Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
//Para fazer com que um número 'x' receba um valor entre 0 e 99, fazemos:

//limite = 99
//x = ( rand() % limite) -> função randômica que calcula um número aleatório até o limite
//usleep(100000) -> pausa o software por um período de tempo. Necessário utilizar a biblioteca #include <unistd.h>



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




