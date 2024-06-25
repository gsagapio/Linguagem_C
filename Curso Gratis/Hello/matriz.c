#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int matriz[3][3];
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	
	matriz[1][0] = 4;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	
	matriz[2][0] = 7;
	matriz[2][1] = 8;
	matriz[2][2] = 9;
	
	printf("Imprimindo a primeira linha: \n");
	printf("%d %d %d \n", matriz[0][0], matriz[0][1], matriz[0][2]);
	return 0;
}
