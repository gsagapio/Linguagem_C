#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float lab, ava, exf, med1, med2, med3, media;
	
	printf("Digite a nota do trabalho em laboratorio: \n");
	scanf("%f", &lab);
	
	printf("Digite a nota da avaliacao semestral: \n");
	scanf("%f", &ava);
	
	printf("Digite a nota do exame final: \n");
	scanf("%f", &exf);
	
	med1 = lab * 2;
	med2 = ava * 3;
	med3 = exf * 5;
	
	media = (med1 + med2 + med3) / 10;
	
	if(media >= 8 && media <= 10){
		printf("Media Ponderada: %.2f \n", media);
		printf("Conceito A");
	} else{
		if(media >= 7){
		printf("Media Ponderada: %.2f \n", media);
		printf("Conceito B");
		
		} else{
			if(media >= 6){
			printf("Media Ponderada: %.2f \n", media);
			printf("Conceito C");
			} else{
				if(media >= 5){
				printf("Media Ponderada: %.2f \n", media);
				printf("Conceito D");	
			} else{
				printf("Media Ponderada: %.2f \n", media);
				printf("Conceito E");
				}
			}
		}
	}
	return 0;
}
