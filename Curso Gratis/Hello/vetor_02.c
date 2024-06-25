#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int vet[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Inserir um dado: \n");
		scanf("%d", &vet[i]);	
	}
	
	printf("Dados inseridos: \n");
	for( i = 0; i < 5; i++){
		printf("%d ", vet[i]);
	}
	
	return 0;
}
