#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int vetor[5];
	float media;
	
	vetor[0]= 50;
	vetor[1] = 40;
	vetor[2] = 30;
	vetor[3] = 20;
	vetor[4] = 10;
	
	media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] ) / 5;
	printf("Resultado %f \n", media);
	
	
	int vet[5] = {1, 2, 3, 4, 5};
	int i;
	float soma = 0;
	
	for(i = 0; i < 5; i++){
		soma += vet[i];
		printf("%.2f \n", soma);
	}
	
	printf("Resultado: %.2f \n", soma / 5);
	
	return 0;
}
