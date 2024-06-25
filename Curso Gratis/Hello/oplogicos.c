#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float media;
	
	print("Insira a nota:\n");
	scanf("%f", &media);
	
	if (media >= 4.0 && media <= 7.0){
		printf("Tem direito a exame extra!\n");
	}
}
