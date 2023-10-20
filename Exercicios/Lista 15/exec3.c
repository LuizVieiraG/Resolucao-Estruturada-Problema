#include <stdio.h>
#include <conio.h>

//3.	Fazer um programa que cria uma estrutura livro, que contém os elementos título, ano de 
//edição, número de páginas e preço. Criar uma variável desta estrutura que é um vetor de 5 
//elementos. Ler os valores para a estrutura e imprimir a média do número de páginas dos livros.

#define TF 2

struct livro{
	char titulo[40];
	int ano;
	int num_paginas;
	float preco;
};


void carregar_registro(struct livro reg_livro[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\nRegistro[%d]", i);
		printf("\nInforme o Titulo: ");
		fflush(stdin);
		gets(reg_livro[i].titulo);
		printf("\nInforme o Ano: ");
		scanf("%d", &reg_livro[i].ano);
		printf("\nInforme o Numero de Paginas: ");
		scanf("%d", &reg_livro[i].num_paginas);
		printf("\nInforme o Preco: ");
		scanf("%f", &reg_livro[i].preco);
	}
	
}

void exibir_registro(struct livro reg_livro[TF]){
	int i;
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		printf("\nTitulo: %s", reg_livro[i].titulo);
		printf("\nAno do Livro: %d", reg_livro[i].ano);
		printf("\nNumero de Paginas: %d", reg_livro[i].num_paginas);
		printf("\nPreço: %0.2f", reg_livro[i].preco);		
	}
}

void calcular_media(struct livro reg_livro[TF]){
	int i, pagina = 0;
	float media;
	printf("\n\n<<Calcular Media de Paginas>>");
	for(i = 0; i < TF; i++){
		pagina += reg_livro[i].num_paginas;
	}
	media = pagina / TF;
	printf("\nMedia de Paginas: %0.2f", media);
}

main (){
	struct livro reg_livro[TF];
	carregar_registro(reg_livro);
	exibir_registro(reg_livro);
	calcular_media(reg_livro);
	
}
