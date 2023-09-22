#include <stdio.h>
#include <conio.h>
#include <string.h>

//2.	Escreva uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador 
//de acordo com a tabela abaixo:   

//Idade			Categoria
//5 a 7 anos		Infantil A
//8 a 10 anos		Infantil B
//11-13 anos		Juvenil A
//14-17 anos		Juvenil B
//>= 18 anos		Adulto

char *retorna_cat(int idade){
	if(idade >= 5 && idade <= 7){
		return "Infantil A";
	}
	else
		if(idade >= 8 && idade <= 10){
			return "Infantil B";
		}
		else
			if(idade >= 11 && idade <= 13){
				return "Juvenil A";
			}
			else
				if(idade >= 14 && idade <= 17){
					return "Juvenil B";
				}
				else
					if(idade >= 19){
						return "Adulto";
					}
	
}



void main(){
	int idade;
	
	printf("<<Categoria de Idades>>\n\n");
	printf("Informe o Idade: ");
	scanf("%d", &idade);
	printf("\nCategoria >> %s", retorna_cat(idade));
}
