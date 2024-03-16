#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Modulo 1 - C Exercicio 03
16/03/24
Algoritmos Gulosos ou Algoritmos Ambiciosos
	O Usuario irá te pagar um valor e vc tem que devolver o troco:
	1- Calculando troco total.
	2- Quantidade de moedas de cada tipo
	3- Tipos: 0.25, 0.10, 0.05, 0.01 cents.
	*/

int main(int argc, char *argv[]) {
	
	float troco, sobra;
	int centavos, indice, quantidade = 0;
	
	int moedas[] = {25, 10, 5, 1};
	
	//Perguntando valor correto de troco
	do{
		printf("Digite o valor do troco: \n");
		scanf("%f", &troco);
		
	}while(troco <= 0);

	centavos = round(troco * 100);
	
	for (indice = 0; indice < 5; indice++){
		
		while(centavos - moedas[indice] >= 0 && centavos > 0){
			centavos = centavos - moedas[indice];
			quantidade++;
		}
	}
	printf("%d moeda(s).\n", quantidade);
}
