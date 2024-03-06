#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float media;
	
	printf("Insira a nota:\n");
	scanf("%f", &media);
	
	if (media >= 7.0){
		printf("Aprovado(a)!\n");
	}
	else{
		printf("Reprovado(a)!\n");
	}
	return 0;
}
