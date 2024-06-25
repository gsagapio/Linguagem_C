#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num[9], i, j, cont;
	
	for(i = 0; i < 9; i++){
		printf("Digite um numero inteiro: \n");
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i < 9; i++){
		cont = 0;
		for(j = 1; j <= num[i]; j++){
			if (num[i] % j == 0){
				cont++;
			}
		}
		if (cont == 2){
			printf("%d Numero Primo, posicao: %d.  \n", num[i], i);
		}		
	}
	
}
