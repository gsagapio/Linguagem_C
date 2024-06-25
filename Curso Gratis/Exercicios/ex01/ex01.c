#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, soma;

	printf("Digite um numero inteiro: \n");
	scanf("%d", &n1);
	printf("Digite um segundo numero inteiro: \n");
	scanf("%d", &n2);
	printf("Digite um terceiro numero inteiro: \n");
	scanf("%d", &n3);
	printf("Digite um quarto numero inteiro: \n");
	scanf("%d", &n4);
	
	soma = n1 + n2 + n3 + n4;
	printf("Os números que você digitou: %d, %d, %d, %d tem a soma igual a %d. \n", n1, n2, n3, n4, soma);
	
	return 0;
}
