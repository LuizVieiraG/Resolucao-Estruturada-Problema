#include <stdio.h>
#include <conio.h>

#define TF 5

//3.Preencher um vetor B de 5 elementos com 1 se o numero informado pelo usuário ímpar
//e com 0 se for par. Escrever o vetor B após o seu total preenchimento. 

void carregar_vetor(int vetor[TF]){
	int i;
	printf("\n\n<<Carregar Vetor>>\n\n");
	for(i = 0; i < TF; i++){
		printf("\nInforme Numero[%d]: ", i);
		scanf("%d", &vetor[i]);
		
		vetor[i] = vetor[i] % 2;
	}
}
void exibir_vetor(int vetor[TF]){
	int i; 
	printf("\n\n<<Exibir Vetor>>\n\n");
	for(i = 0; i < TF; i++){
		printf("\nVetor[%d] = %d", i , vetor[i]);
	}
}
void main(){
	int vetor[TF];
	carregar_vetor(vetor);
	exibir_vetor(vetor);
}
