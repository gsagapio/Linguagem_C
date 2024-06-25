#include <stdio.h>
#include <stdlib.h>

void imprime1 (int v[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
}

void imprime2(int v[5]){
	int i;
	for (i = 0; i < 5; i++){
		printf("%d ", v[i]);
	}
}

void imprime3 (int *v, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int vet[5] = {1, 2, 3, 4, 5};
	
	puts("Primeira funcao imprime: ");
	imprime1(vet, 5);
	
	puts("Segunda funcao imprime: ");
	imprime2(vet);
	
	puts("Terceira funcao imprime: ");
	imprime3(vet, 5);

}
