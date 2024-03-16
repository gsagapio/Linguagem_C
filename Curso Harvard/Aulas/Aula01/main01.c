/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
13/03/24 by: Gustavo S Agapio
Fundamentos de C, com input e Output
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char nome[30];
	
	printf("Hello World! \n");
	
	printf("Whats your name? \n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("More specifically, hello %s\n", nome);
	return 0;
}
