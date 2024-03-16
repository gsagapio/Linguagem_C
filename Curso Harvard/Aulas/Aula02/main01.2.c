#include <stdio.h>
#include <stdlib.h>
/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
13/03/24 by: Gustavo S Agapio
Fundamentos de C, com operadores
*/
int main(int argc, char *argv[]) {
	
	int n1, n2, soma;
	float div;
	
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	printf("Digite outro numero: \n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	div = (float)n1 / (float)n2;
	
	
	printf("Voce digitou: %d e %d\n", n1, n2);
	printf("Soma: %d\n", soma);
	printf("Divisao: %.2f\n", div);
	
	return 0;
}
