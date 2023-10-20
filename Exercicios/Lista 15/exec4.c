#include <stdio.h>
#include <conio.h>

#define TF 2

//4.Foi realizada uma pesquisa entre 5 habitantes de uma certa regi�o. De cada habitante 
//foram coletados os dados: idade, sexo (1-masculino, 2-Feminino), sal�rio e n�mero de filhos. 
//Crie a estrutura de dados adequada para armazenar estas informa��es e fa�a uma fun��o que armazene 
//as informa��es digitadas pelo usu�rio na estrutura de dados criada. Fa�a tamb�m uma fun��o que 
//calcula a m�dia do sal�rio dos habitantes.

struct habitantes{
	int idade;
	int sexo;
	float salario;
	int num_filhos;
};

void carregar_registro(struct habitantes reg_hab[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("Registro[%d]\n", i);
		printf("\nInforme a idade: ");
		scanf("%d", &reg_hab[i].idade);
		do{
			printf("\nInforme o Sexo(1-M; 2-F): ");
			scanf("%d", &reg_hab[i].sexo);
			if(reg_hab[i].sexo == 1){
				printf("Sexo = Masculino");
			}else {
				printf("Sexo = Feminino");
			}
				
		}while(reg_hab[i].sexo != 1 && reg_hab[i].sexo != 2);
		printf("\nInforme o Salario: ");
		scanf("%f", &reg_hab[i].salario);
		printf("\nInforme o Numero de Filhos: ");
		scanf("%d", &reg_hab[i].num_filhos);
	}
}

void exibir_registro(struct habitantes reg_hab[TF]){
	int i;
	printf("\n\n<<<Exibicao>>>");
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		printf("\nIdade: %d", reg_hab[i].idade);
		printf("\nSexo: %d", reg_hab[i].sexo);
		printf("\nSalario: %0.2f", reg_hab[i].salario);
		printf("\nNumero de Filhos: %d", reg_hab[i].num_filhos);		
	}
}

void media_registro(struct habitantes reg_hab[TF]){
	int i, salarios = 0;
	float media;
	for(i = 0; i < TF; i++){
		salarios += reg_hab[i].salario;
	}
	media = salarios / TF;
	printf("\n\nMedia de Salarios: %0.2f", media);
}

void main(){
	struct habitantes reg_hab[TF];
	carregar_registro(reg_hab);
	exibir_registro(reg_hab);
	media_registro(reg_hab);
}
