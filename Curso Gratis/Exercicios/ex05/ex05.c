#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int seg, min, hora;
	
	printf("Olá Jeremias! Digite o tempo do seu cronometro em segundos aqui: \n");
	scanf("%d", &seg);
	
	
	hora = seg / 3600;
	seg = seg - (3600 * hora);
	min = seg / 60;
	seg = seg - (60 * min);
	
	printf("O tempo em segundos foi: %d \n", seg);
	printf("O tempo em minutos foi: %d \n", min);
	printf("O tempo em horas foi: %d \n", hora);
		
	return 0;
}
