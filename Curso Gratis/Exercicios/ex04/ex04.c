#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario_atual, percentual, aumento, salario_final;
	
	printf("Digite o salario atual do funcionario: \n");
	scanf("%f", &salario_atual);
	
	printf("Digite o percentual de aumento para esse salario: \n");
	scanf("%f", &percentual);
	
	aumento = (salario_atual / 100) * percentual;
	printf("O aumento sera de %.2f reais. \n", aumento);
	
	salario_final = salario_atual + aumento;
	printf("O salario final sera de %.2f reais. \n", salario_final);
	
	return 0;
}
