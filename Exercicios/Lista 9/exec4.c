#include <stdio.h>
#include <conio.h>

#define TF 10

//4.	Ler um vetor C de 10 elementos inteiros, trocar todos 
//os valores negativos do vetor C por 0. Escrever o vetor C modificado.

void carregar_vetor(int vetorC[TF]){
	int i;
	printf("\n\n<<Carregar Vetor>>\n\n");
	for(i = 0; i < TF; i++){
		printf("\nInforme Vetor[%d]: ", i);
		scanf("%d", &vetorC[i]);
		if(vetorC[i] < 0){
			vetorC[i] = 0;
		}
	}
}
void exibir_vetor(int vetorC[TF]){
	int i; 
	printf("\n\n<<Exibir Vetor>>\n\n");
	for(i = 0; i < TF; i++){
		printf("\nVetor[%d] = %d", i , vetorC[i]);
	}
}
void main(){
	int vetorC[TF];
	carregar_vetor(vetorC);
	exibir_vetor(vetorC);
}
