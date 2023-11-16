#include <stdio.h>
#include <conio.h>
#include <string.h>


#define TF 2

struct concurso{
	char nome[100];
	float salario;
	char cpf[12];
	int idade;
	int sexo;
};

float media_salarial(struct concurso reg_con[TF]){
	int i;
	float media = 0, soma = 0;
	
	for(i=0;i<TF;i++){
		soma += reg_con[i].salario;
	}
	media = soma / TF;
	return media;
}

float maior_salario_con(struct concurso reg_con[TF]){
	int i;
	float maior = 0;
	for(i=0;i<TF;i++){
		if(maior < reg_con[i].salario){
			maior = reg_con[i].salario;
		}
	}	
	return maior;
}

int qtd_mulher(struct concurso reg_con[TF]){
	int i, cont = 0;
	for(i=0;i<TF;i++){
		if(reg_con[i].sexo == 2){
			cont++;
		}
	}
	return cont;
}

void carregar_reg(struct concurso reg_con[TF]){
	int i;
	printf("\n<<Carregar Registro>>\n");
	
	for(i=0; i<TF; i++){
		printf("\nRegistro[%d]", i);
		fflush(stdin);
		printf("\nInforme Seu Nome: ");
		gets(reg_con[i].nome);
		printf("\nInforme Seu Salario: ");
		scanf("%f", &reg_con[i].salario);
		fflush(stdin);
		printf("\nInforme o CPF: ");
		scanf("%s", &reg_con[i].cpf);
		printf("\nInforme o Idade: ");
		scanf("%d", &reg_con[i].idade);
		do{
			printf("\nInforme o Sexo(1-Masculino; 2-Feminino): ");
			scanf("%d", &reg_con[i].sexo);		
		}while(reg_con[i].sexo != 1 && reg_con[i].sexo != 2);
	}
}
void exibir_reg(struct concurso reg_con[TF]){
	int i;
	printf("\n<<Exibir Registro>>\n");
	
	for(i=0; i<TF; i++){
		printf("\n\nRegistro[%d]", i);
		printf("\nNome: %s", reg_con[i].nome);
		printf("\nSalario: %0.2f", reg_con[i].salario);
		printf("\nCPF: %s", reg_con[i].cpf);
		printf("\nIdade: %d", reg_con[i].idade);
		if(reg_con[i].sexo == 1){
			printf("\nSexo Masculino");
		}else{
			printf("\nSexo Feminino");
		}
	}
}




void main(){
	struct concurso reg_con[TF];
	float media_salario, maior_salario;
	int sexo_feminino;
	carregar_reg(reg_con);
	exibir_reg(reg_con);
	media_salario = media_salarial(reg_con);
	maior_salario = maior_salario_con(reg_con);
	sexo_feminino = qtd_mulher(reg_con);
	printf("\n\nMedia Salarial: %0.2f", media_salario);
	printf("\n\nMaior Salario: %0.2f", maior_salario);
	printf("\n\nQuantidade de Mulheres: %d", sexo_feminino);
}
