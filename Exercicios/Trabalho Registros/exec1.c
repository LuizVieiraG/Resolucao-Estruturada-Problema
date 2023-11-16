#include <stdio.h>
#include <conio.h>
#include <string.h>


#define TF 2

struct cadastro{
	char nome[100];
	float salario;
	char cpf[12];
	int idade;
	int sexo;
};

float calculomedia(struct cadastro reg_cad[TF]){
	int i;
	float media = 0;
	for(i = 0; i < TF; i++){
		media += reg_cad[i].salario;
	}
	media = media / TF;
	return media;
}
float encontrar_maiorsalario(struct cadastro reg_cad[TF]) {
    int i;
	float maiorsalario = reg_cad[0].salario;  
    for(i = 1; i < TF; i++) {
        if (reg_cad[i].salario > maiorsalario) {
            maiorsalario = reg_cad[i].salario;
        }
    }
    return maiorsalario;
}

int contarmulher(struct cadastro reg_cad[TF]) {
    int i, quantidade_feminino = 0;
    for(i = 0; i < TF; i++) {
        if(reg_cad[i].sexo == 2) {
            quantidade_feminino++;
        }
    }
    return quantidade_feminino;
}

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
		scanf("%s", &reg_cad[i].cpf);
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
	printf("\n<<Dados Dos Cadastros>>");
	for(i = 0; i < TF; i++){
		printf("\nCadastro[%d]", i);
		printf("\nInforme o Nome: %s", reg_cad[i].nome);
		printf("\nInforme seu Salario: %0.2f", reg_cad[i].salario);
		printf("\nInforme seu CPF: %s", reg_cad[i].cpf);
		printf("\nInforme sua Idade: %d\n", reg_cad[i].idade);
		if(reg_cad[i].sexo == 1){
			printf("|Masculino|");
		}else{
			printf("|Feminino|");
		}	
	}
}

void main(){
	struct cadastro reg_cad[TF];
	int quantfeminino;
	float mediasalario, maiorsalario;
	
	carregar_reg(reg_cad);
	exibir_reg(reg_cad);
	mediasalario = calculomedia(reg_cad);
	printf("\n\nMedia Salarial: %0.2f", mediasalario);
	maiorsalario = encontrar_maiorsalario(reg_cad);
    printf("\n\nMaior Salario: %0.2f", maiorsalario);
    quantfeminino = contarmulher(reg_cad);
    printf("\nQuantidade de Pessoas do Sexo Feminino: %d", quantfeminino);
}
