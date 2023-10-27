#include <stdio.h>
#include <conio.h>

#define TF 5

struct cadastro{
	char nome[100];
	float salario;
	int cpf;
	int idade;
	int sexo;
};

void carregar_reg(struct cadastro reg_cad[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\n<<Cadastro>>");
		fflush(stdin);
		printf("\nInforme o Nome: ");
		gets(reg_cad[i].nome);
		printf("\nInforme seu Salario: ");
		scanf("%f", &reg_cad[i].salario);
		printf("\nInforme seu CPF: ");
		scanf("%d", &reg_cad[i].cpf);
		printf("\nInforme sua Idade: ");
		scanf("%d", &reg_cad[i].idade);
		do{
			printf("\nInforme seu Sexo (1 - M; 2 - F): ");
			scanf("%d", &reg_cad[i].sexo);
		}while(reg_cad[i].sexo != 1 && reg_cad[i].sexo != 2);
	}
}

void exibir_reg(struct cadastro reg_cad[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\n<<Cadastro>>");
		fflush(stdin);
		printf("\nInforme o Nome: ");
		gets(reg_cad[i].nome);
		printf("\nInforme seu Salario: ");
		scanf("%f", &reg_cad[i].salario);
		printf("\nInforme seu CPF: ");
		scanf("%d", &reg_cad[i].cpf);
		printf("\nInforme sua Idade: ");
		scanf("%d", &reg_cad[i].idade);
		do{
			printf("\nInforme seu Sexo (1 - M; 2 - F): ");
			scanf("%d", &reg_cad[i].sexo);
		}while(reg_cad[i].sexo != 1 && reg_cad[i].sexo != 2);
	}
}

void main(){
	struct cadastro reg_cad[TF];
	carregar_reg(reg_cad);
}
