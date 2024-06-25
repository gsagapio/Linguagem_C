#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, n3, media;
	int p1, p2, p3;
	
	printf("Digite a primeira nota do aluno e o seu peso de relevancia em seguida: \n");
	scanf("%f", &n1);
	scanf("%d", &p1);
	
	printf("Digite a segunda nota do aluno e o seu peso de relevancia em seguida: \n");
	scanf("%f", &n2);
	scanf("%d", &p2);
	
	printf("Digite a terceira nota do aluno e o seu peso de relevancia em seguida: \n");
	scanf("%f", &n3);
	scanf("%d", &p3);
	
	media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
	printf("A media das notas fornecidas: %.2f", media);
	
	return 0;
}
