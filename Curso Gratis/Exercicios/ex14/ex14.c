#include <stdio.h>
#include <stdlib.h>

void conta_luz(float salariof, float qwtsf, float *reais_qwtsf, float *totalf, float *descontof){
	
	*reais_qwtsf = salariof / 1000;
	*totalf = *reais_qwtsf * qwtsf;
	*descontof = *totalf - ((*totalf / 100) * 15);
}

int main(int argc, char *argv[]) {
	
	float salario, qwts, reais_qwts, total, desconto;
	
	printf("Qual o seu salario mensal? \n");
	scanf("%f", &salario);
	
	printf("Quantos quilowatts sua residencia consome? \n");
	scanf("%f", &qwts);
	
	conta_luz(salario, qwts, &reais_qwts, &total, &desconto);
	
	printf("Valor por quilowatts: R$%.2f \n", reais_qwts);
	printf("Valor total residencia: R$%.2f \n", total);
	printf("Valor com 15por cento de desconto: R$%.2f \n", desconto);
}
