#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TF 5

struct moto{
	int porte;
	int cor;
	float peso;
	float pot;
};

int maior_pot(struct moto reg_moto[TF]){
	int i, maior = 0;
	for(i = 0; i < TF; i++){
		if(maior < reg_moto[i].pot){
			maior = reg_moto[i].pot;
		}
	}
	return maior;
	
}

int qtd_porte(struct moto reg_moto[TF]){
	int i, cont = 0;
	for(i = 0; i<TF; i++){
		if(reg_moto[i].porte == 1){
			cont++;
		}
	}
	return cont;
}
int qtd_marrom(struct moto reg_moto[TF]){
	int i, cont = 0;
	for(i = 0; i < TF; i++){
		if(reg_moto[i].cor == 2){
			cont++;
		}
	}
	return cont;
}
int qtd_media(struct moto reg_moto[TF]){
	int i, cont = 0;
	for(i = 0; i<TF; i++){
		if(reg_moto[i].porte == 2){
			cont++;
		}
	}
	return cont;
}
int qtd_pequena(struct moto reg_moto[TF]){
	int i, cont = 0;
	for(i = 0; i<TF; i++){
		if(reg_moto[i].porte == 3){
			cont++;
		}
	}
	return cont;
}
void carregar_registro(struct moto reg_moto[TF]){
	int i;
	printf("\n<<Carregar Registro>>");
	for(i = 0; i < TF; i++){
		printf("\n\n<<Registro[%d]>>", i);
		do{
			printf("\nInforme Porte da Moto(1-grande, 2-medio, 3-pequenho): ");
			scanf("%d", &reg_moto[i].porte);
		}while(reg_moto[i].porte < 1 || reg_moto[i].porte > 3); 
		do{
			printf("\nInforme Cor da Moto(1-branca, 2-marrom, 3-preto): ");
			scanf("%d", &reg_moto[i].cor);
		}while(reg_moto[i].cor < 1 || reg_moto[i].cor > 3); 
		
		printf("\nInforme o Peso: ");
		scanf("%f", &reg_moto[i].peso);
		printf("\nInforme a Potencia: ");
		scanf("%f", &reg_moto[i].pot);
	}
}
void exibir_registro(struct moto reg_moto[TF]){
	int i;
    printf("\n<<Exibir Registro>>");
    for (i = 0; i < TF; i++) {
        printf("\n\n<<Registro[%d]>>", i);
        
        printf("\nPorte da Moto: ");
        switch (reg_moto[i].porte) {
            case 1:
                printf("Grande");
                break;
            case 2:
                printf("Medio");
                break;
            case 3:
                printf("Pequeno");
                break;
            default:
                printf("Opcao invalida");
        }

        printf("\nCor da Moto: ");
        switch (reg_moto[i].cor) {
            case 1:
                printf("Branca");
                break;
            case 2:
                printf("Marrom");
                break;
            case 3:
                printf("Preto");
                break;
            default:
                printf("Opcao invalida");
        }

        printf("\nPeso: %0.2f", reg_moto[i].peso);
        printf("\nPotencia: %0.2f", reg_moto[i].pot);
    }
}



void main(){
	struct moto reg_moto[TF];
	int maior_potencia, porte_grande, cor_marrom, porte_medio, porte_pequeno;
	carregar_registro(reg_moto);
	exibir_registro(reg_moto);
	maior_potencia = maior_pot(reg_moto);
	porte_grande = qtd_porte(reg_moto);
	cor_marrom = qtd_marrom(reg_moto);
	porte_medio = qtd_media(reg_moto);
	porte_pequeno = qtd_pequena(reg_moto); 
	
	printf("\n\nMoto Com Maior Potencia: %d", maior_potencia);
	printf("\nMotos Grandes[%d] e Cor Marrom[%d]", porte_grande, cor_marrom);
	printf("\nMotos Grandes[%d], Medias[%d], Pequenas[%d]", porte_grande, porte_medio, porte_pequeno);
}

