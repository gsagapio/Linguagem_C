#include <stdio.h>
#include <stdlib.h>

/* Modulo 1 - Exercicio 02
Vamos recriar essas pir�mides em C, ainda que em texto, usando hashes ( # ) para tijolos, a la a seguir. 
Cada hash � um pouco mais alto do que largo, ent�o as pir�mides em si tamb�m s�o mais altas do que largas.

      #  #
    ##  ##
  ###  ###
####  ####*/
   
int main(int argc, char *argv[]) {
	
 int altura, linha, coluna, espacos;

    // Solicita ao usu�rio o tamanho da altura
   do {
        printf("Digite um numero entre 1 e 8 para definir o tamanho do obstaculo: \n");
        scanf("%d", &altura);
        
    } while (altura < 1 || altura > 8); // Verifica se o n�mero est� no intervalo de 1 a 8
    
	for(linha = 0; linha < altura; linha++){
	   		
	   		for(espacos = 0; espacos < (altura - linha - 1); espacos++){
	   			printf(" ");
			}
	   		
		   	for (coluna = 0; coluna <= linha; coluna++){
		   		printf("#");
			}
			
			printf("  ");
			
			for (coluna = 0; coluna <= linha; coluna++){
		   		printf("#");
			}
			
	   		printf("\n");	
   }
   
    getchar(); // Espera que o usu�rio pressione Enter para finalizar o programa
}
