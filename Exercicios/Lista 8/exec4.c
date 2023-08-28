#include <stdio.h>
#include <conio.h>

//4.	POR VALOR - Uma empresa deseja especificar um programa para gerar sua folha de pagamentos. 
//Seu programa deve:

//a.	Fazer uma fun��o que leia e retorne o sal�rio_bruto;
//b.	Fazer uma fun��o que leia e retorne o total de horas extras;
//c.	Fazer uma fun��o que leia e retorne os descontos;
//d.	Fazer uma fun��o que receba o total de horas extras e retorne os valores correspondes a essas horas sabendo que cada hora extra custa R$ 20,00;
//e.	Fazer uma fun��o que calcule e retorne o sal�rio bruto passando por par�metro as informa��es necess�rias para isso;
//f.	Fazer um procedimento que calcule e exiba o sal�rio l�quido do funcion�rio passando por par�metros as informa��es necess�rias.

//Esta empresa possui 5 funcion�rios, e todos precisaram ter seus sal�rios calculados.


float salario_bruto(){
	float salario; 
	printf("\nDigite seu Salario: ");
	scanf("%f", &salario);
	return salario;	
}
float horas_extras(){
	float extras;
	printf("\nInforme Horas Extras: ");
	scanf("%f", &extras);
	return extras;
}
float descontos(){
	float valor_descontos;
	printf("\nInforme os Descontos: ");
	scanf("%f", &valor_descontos);
	return valor_descontos;	
}
float total_horas(float extras){
	float mult;
	mult = extras * 20;
	return mult;
}
float calculo_salario(float valor_horas_extras, float salario){
	float salario_total;
	salario_total = valor_horas_extras + salario;
	return salario_total;
}
void salario_liquido(float salario_bruto1, float descontos){
	float salario_liq;
	salario_liq = salario_bruto1 - descontos;
	printf("\nSalario Liquido: %0.2f", salario_liq);
}
void main(){
	float salario, extras, taxa_descontos, valor_horas_extras, salario_bruto1;
	int i;
	for(i = 0; i < 5; i++){
		printf("\n<<Salario>>\n");
		printf("\nFuncionario : %d", i + 1);
		
		salario = salario_bruto();
		extras = horas_extras();
		taxa_descontos = descontos();
		valor_horas_extras = total_horas(extras);
		salario_bruto1 = calculo_salario(valor_horas_extras, salario);
		
		printf("\nValor de Horas Extras: %0.2f", valor_horas_extras);
		printf("\nSalario Bruto: %0.2f", salario_bruto1);
		salario_liquido(salario_bruto1, taxa_descontos);
	}	 
}











