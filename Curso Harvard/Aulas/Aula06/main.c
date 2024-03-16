#include <stdio.h>
#include <stdlib.h>
/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
15/03/24 by: Gustavo S Agapio
Fundamentos de C, teste do jogo MarioBros
*/
int main(int argc, char *argv[]) {
	
	int inter, i, j, bloco;
	
	//Blocos de interrogação do mario
	do{
		printf("Qual a largura dos blocos do jogo? \n");
		scanf("%d", &inter);
	} while(inter < 1);
	
	for (i = 0; i < inter; i++){
		printf("?");
	}
	printf("\n");
	
	//Blocos para pular do mario
	printf("Qual o tamanho da parede? \n");
	scanf("%d", &bloco);
	
	for(i = 0; i < bloco; i++){
		for(j = 0; j < bloco; j++){
			printf("#");
		}
		printf("\n");
	}
	

}
