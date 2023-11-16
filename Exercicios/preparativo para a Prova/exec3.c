#include <stdio.h>
#include <conio.h>

#define TL 2
#define TC 2

//. Considerando uma matriz 3 x 3 e escreva um algoritmo que resolva os itens abaixo:
//- Ler a matriz;
//- Exibir a matriz (organizada);
//- Calcular a soma total da matriz;
//- Retornar o maior e menor elemento da matriz;
//- Calcular a média de elementos da matriz;

int maior_elemento(int matriz[TL][TC]){
	int l, c, maior;
	for(l=0; l<TL; l++){
		for(c=0; c <TC; c++){
			if(l==0 && c ==0){
				maior = matriz[l][c];
			}else{
				if(matriz[l][c] > maior){
					maior = matriz[l][c];
				}
			}
			
		}	
	}
	return maior;
}
int menor_elemento(int matriz[TL][TC]){
	int l, c, menor;
	for(l=0; l<TL; l++){
		for(c=0; c <TC; c++){
			if(l==0 && c ==0){
				menor = matriz[l][c];
			}else{
				if(matriz[l][c] < menor){
					menor = matriz[l][c];
				}
			}
			
		}	
	}
	return menor;
}

float media_elementos(int matriz[TL][TC]){
    int l, c;
    float media = 0;
    int total_elementos = TL * TC;

    for(l = 0; l < TL; l++){
        for(c = 0; c < TC; c++){
            media += matriz[l][c];
        }   
    }

    media /= total_elementos;

    return media;
}

void carregar_matriz(int matriz[TL][TC]){
	int l, c;
	printf("\n<<Carregar Matriz>>");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nInforme Um Numero[%d][%d]: ", l, c);
			scanf("%d", &matriz[l][c]);
		}
	}
}

void exibir_matriz(int matriz[TL][TC]){
	int l, c;
	printf("\n<<Exibir Matriz>>\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nMatriz[%d][%d]: %d ", l, c, matriz[l][c]);
		}
	printf("\n");
	}
}

int soma_matriz(int matriz[TL][TC]){
	int l, c, acumula = 0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			acumula += matriz[l][c];
		}
	}
	return acumula;
}

void main(){
	int matriz[TL][TC], maior_e, menor_e, soma;
	float media_matriz;
	
	carregar_matriz(matriz);
	exibir_matriz(matriz);
	maior_e = maior_elemento(matriz);
	menor_e = menor_elemento(matriz);
	soma = soma_matriz(matriz);
	media_matriz = media_elementos(matriz);
	printf("\nSoma da Matriz: %d", soma);
	printf("\nMaior Elemento: %d", maior_e);
	printf("\nMenor Elemento: %d", menor_e);
	printf("\nMedia da Matriz: %0.2f", media_matriz);
	
}
