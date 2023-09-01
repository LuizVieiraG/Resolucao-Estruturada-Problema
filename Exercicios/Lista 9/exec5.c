#include <stdio.h>
#include <conio.h>

#define TF 10

//5.	Ler um vetor D de 10 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa, 
//ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. 
//Escrever todo o vetor D e todo o vetor E.

void carregar_vetor(int vetorD[TF]){
	int i;
	printf("\n<<Carregar Vetor>>\n");
	for(i = 0; i < TF; i++){
		printf("Informe Vetor[%d]: ", i);
		scanf("%d", &vetorD[i]);
	}
}
void inverter_valor(int vetorD[TF], int vetorE[TF]){
	int i, j;
	printf("\n<<Inverter Valor>>\n");
	for(i = 0, j=TF-1; i < TF; i++, j--){
		vetorE[i] = vetorD[j];
	}
}

void exibir_vetor(int vetorD[TF]){
	int i; 
	printf("\n<<Exibir Vetor>>\n");
	for(i = 0; i < TF; i++){
		printf("\nVetor[%d] = %d", i, vetorD[i]);
	}
}

void main(){
	int vetorD[TF], vetorE[TF];
	inverter_valor(vetorD, vetorE);
	
	carregar_vetor(vetorD);

	
	printf("\nExibir Vetor D: ");
	exibir_vetor(vetorD);
	
	printf("\nExibir Vetor E: ");
	exibir_vetor(vetorE);
}
