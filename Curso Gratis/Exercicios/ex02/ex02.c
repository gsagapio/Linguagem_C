#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota1, nota2, nota3, media;
	
	printf("Informe 3 notas em sequencia: \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("A média aritmetica das notas: %.2f", media);
	
	return 0;
}
