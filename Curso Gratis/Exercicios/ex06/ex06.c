#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2;
	
	printf("Digite um valor: \n");
	scanf("%d", &n1);
	
	printf("Digite outro valor: \n");
	scanf("%d", &n2);
	
	if (n1 < n2){
		printf("O valor %d e maior do que o valor %d. \n", n2, n1);
	}
	
	if (n1 > n2){
		printf("O valor %d e maior do que o valor %d. \n", n1, n2);
		
	}else{
		printf("Os valores sao iguais.");
		
	}
	
	return 0;
}
