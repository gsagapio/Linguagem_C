#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int mat[3][3];
	int i, j, x, lin = -1, col = -1, achou = 0; // Inicialize lin e col com -1
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++) {
			printf("Insira o elemento da linha %d, coluna %d: \n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("Insira o valor da chave de busca X: \n");
	scanf("%d", &x);
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++) {
			if (mat[i][j] == x){
				achou = 1;
				lin = i;
				col = j;
				break;
			}
		}
		if (achou == 1) // Movido para fora do loop interno
			break;
	}
	
	if (achou == 1){
		printf("Valor %d encontrado na linha %d coluna %d \n", x, lin, col);	
	}  else {
		printf("Valor não encontrado. \n");
	}	

	return 0;
}

