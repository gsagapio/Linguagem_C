#include <stdio.h>
#include <stdlib.h>

/* Modulo 1 - Exercicio 01
1- Peça ao usuário o tamanho da altura.
2- Se o tamanho da altura for menor que 1 ou maior que 8(ou não inteiro), fique nesse passo até que o usuário insira uma entrada válida.
3- Itere a variável i até o tamanho da altura.
4- Imprima os #. [Não se esqueça da quebra de linha!]
5- Faça o seguinte triangulo:
      #
     ##
    ###
   ####*/

int main(int argc, char *argv[]) {
	
 int altura, linha, coluna, espacos;
    
    do {
        printf("Digite um numero entre 1 e 8 para definir o tamanho do obstaculo: \n");
        scanf("%d", &altura);
        
    } while (altura < 1 || altura > 8); // Verifica se o número está no intervalo de 1 a 8
    
   for(linha = 0; linha < altura; linha++){
   		
   		for(espacos = 0; espacos < (altura - linha - 1); espacos++){
   			printf(" ");
		}
   		
	   	for (coluna = 0; coluna <= linha; coluna++){
	   		printf("#");
		}
		
   		printf("\n");	
   }
   
    getchar(); // Espera que o usuário pressione Enter para finalizar o programa
}
