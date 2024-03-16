#include <stdio.h>
#include <stdlib.h>
/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
15/03/24 by: Gustavo S Agapio
Fundamentos de C, com loops e funções
*/

int get_positive_int(void);

int main(int argc, char *argv[]) {
	
	int num = get_positive_int();
	printf("%d\n", num);
	
	return 0;
}

int get_positive_int(void){
	int n;
	do{
		printf("Positive Integer: ");
		scanf("%d", &n);
		
	}while(n < 1);
	
	return n;
}
