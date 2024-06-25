#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	char s[10];
	
	printf("Digite algo(Scanf rebuscado): \n");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s \n\n", s);
	
	printf("Digite algo(fgets): \n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	
	return 0;
}
