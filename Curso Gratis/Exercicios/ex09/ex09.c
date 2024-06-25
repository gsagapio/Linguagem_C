#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma, inicializador;
	inicializador = 1;
	soma = 0;
	
	while(inicializador <= 10){
		soma += inicializador;
		inicializador++;
	}
	
	printf("A soma de todos os números inteiros é igual a %d \n", soma);
	return 0;
}
