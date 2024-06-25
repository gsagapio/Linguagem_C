#include <stdio.h>
#include <stdlib.h>

/* Modulo 1 - Exercicio 01
1- Pe�a ao usu�rio o tamanho da altura.
2- Se o tamanho da altura for menor que 1 ou maior que 8(ou n�o inteiro), fique nesse passo at� que o usu�rio insira uma entrada v�lida.
3- Itere a vari�vel i at� o tamanho da altura.
4- Imprima os #. [N�o se esque�a da quebra de linha!]
5- Fa�a o seguinte triangulo:
      #
     ##
    ###
   ####*/

int main(int argc, char *argv[]) {
	
 int altura, linha, coluna, espacos;
    
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
		
   		printf("\n");	
   }
   
    getchar(); // Espera que o usu�rio pressione Enter para finalizar o programa
}
