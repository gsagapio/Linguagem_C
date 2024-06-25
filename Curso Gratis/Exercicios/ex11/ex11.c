#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n1, n2, atual;
	n1 = 0;
	n2 = 1;
	i = 1;
	
	printf("Os 8 primeiros termos da sequência de Fibonacci: \n");
	
	printf("%d \n", n1);
	printf("%d \n", n2);
	
	for(i = 1; i <= 6; i++){
		atual = n1 + n2;
		printf("%d \n", atual);
		
		n1 = n2;
		n2 = atual;
	}
	
	return 0;
}
