#include <stdio.h>
#include <stdlib.h>

/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
14/03/24 by: Gustavo S Agapio
Fundamentos de C, com loops
*/

void meow(int n);

int main(int argc, char *argv[]) {

	meow(5);
}

void meow(int n){
	
	int i;
	
	for(i = 0; i < n; i++){
		printf("meow.\n");	
	}
}
