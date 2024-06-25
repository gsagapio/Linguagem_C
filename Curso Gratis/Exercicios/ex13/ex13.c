#include <stdio.h>
#include <stdlib.h>

float SalarioFinal(float horaf, float sInicialf){
	return horaf * (sInicialf / 2) - (3 * ((horaf * (sInicialf / 2)) / 100));
}

int main(int argc, char *argv[]) {
	
	int horas;
	float sInicial, sFinal;
	
	printf("Digite o numero de horas trabalhadas do gestor: \n");
	scanf("%d", &horas);
	
	printf("Digite o salario minimo (inicial) desse gestor: \n");
	scafn("%f", &sInicial);
	
	sFinal = SalarioFinal(horas, sInicial);
	
	printf("De acordo com os dados fornecidos o valor do salário a receber do gestor: R$ %.2f\n", sFinal);
	
	return 0;
}
