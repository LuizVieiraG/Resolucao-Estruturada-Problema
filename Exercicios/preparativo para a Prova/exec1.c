#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct animais{
	char nome[100];
	char especie[100];
	float peso;
	int idade;
	int sexo;
};

int achar_maisvelho(struct animais reg_ani[TF]){
	int i, cont = 0;
	for(i=0; i<TF; i++){
		if(reg_ani[i].idade > cont){
			cont = i;
		}
	}
	return cont;
}

int achar_maisnovo(struct animais reg_ani[TF]){
	int i, cont = 0;
	for(i=0; i<TF; i++){
		if(reg_ani[i].idade < cont){
			cont = i;	
		}
	}
	return cont;
}


float media_peso(struct animais reg_ani[TF]){
	int i;
	float media = 0;
	for(i=0; i<TF; i++){
		media += reg_ani[i].peso / TF;
	}
	return media;
}

void machos_acima(struct animais reg_ani[TF]){
	int i;
	float media = media_peso(reg_ani);
	printf("\n\n<<Animais Acima do Peso>>");
	for(i=0; i<TF; i++){
		if(reg_ani[i].sexo == 1 && reg_ani[i].peso > media){
			printf("\nNome do Animal: %s", reg_ani[i].nome);
			printf("\nPeso do Animal: %0.2f", reg_ani[i].peso);
		}	
	}	
}



void carregar_reg(struct animais reg_ani[TF]){
	int i;
	printf("\n<<Carregar Registro>>\n");
	for(i = 0; i < TF; i++){
		printf("\nRegistro[%d]", i);
		fflush(stdin);
		printf("\nInforme o Nome do Animal: ");
		gets(reg_ani[i].nome);
		fflush(stdin);
		printf("\nInforme a Especie do Animal: ");
		gets(reg_ani[i].especie);
		printf("\nInforme o Peso: ");
		scanf("%f", &reg_ani[i].peso);
		printf("\nInforme a idade: ");
		scanf("%d", &reg_ani[i].idade);
		do{
			printf("\nInforme o Sexo(1-macho; 2-Femea): ");
			scanf("%d", &reg_ani[i].sexo);
		}while(reg_ani[i].sexo != 1 && reg_ani[i].sexo != 2);
	}
}

void exibir_reg(struct animais reg_ani[TF]){
	int i;
	printf("\n<<Exibir Registro>>\n");
	for(i=0; i< TF; i++){
		printf("\nRegistro[%d]", i);
		printf("\nNome do Animal: %s", reg_ani[i].nome);
		printf("\nEspecie do Animal: %s", reg_ani[i].especie);
		printf("\nPeso do Animal: %0.2f", reg_ani[i].peso);
		printf("\nIdade do Animal: %d", reg_ani[i].idade);
		if(reg_ani[i].sexo == 1){
			printf("\nSexo Macho");
		}else{
			printf("\nSexo Femea");
		}
	}
}



void main(){
	struct animais reg_ani[TF];
	float media_peso_animais;
	int mais_velho, mais_novo;
	
	carregar_reg(reg_ani);
	exibir_reg(reg_ani);
	media_peso_animais = media_peso(reg_ani);
	mais_velho = achar_maisvelho(reg_ani);
	mais_novo = achar_maisnovo(reg_ani); 
	
	
	printf("\n\nMedia de Peso dos Animais: %0.2f", media_peso_animais);
	printf("\nAnimal mais velho:\n");
    printf("\nNome: %s\n", reg_ani[mais_velho].nome);
    printf("\nPeso: %0.2f\n", reg_ani[mais_velho].peso);

    printf("\n\nAnimal mais novo:\n");
    printf("\nNome: %s\n", reg_ani[mais_novo].nome);
    printf("\nPeso: %0.2f\n", reg_ani[mais_novo].peso);
	
	
}
