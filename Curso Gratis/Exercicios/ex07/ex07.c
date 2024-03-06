#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int opc;
	float n1; 
	float n2;
	float result;
	
	printf("Digite 1 para somar. \n");
	printf("Digite 2 para subtrair. \n");
	printf("Digite 3 para dividir. \n");
	printf("Digite 4 para multiplicar. \n");
	scanf("%d", &opc);

	switch(opc){
		case 1:
			printf("Insira o valor 1: ");
			scanf("%f", &n1);
			
			printf("Insira o valor 2: ");
			scanf("%f", &n2);
			
			result = n1 + n2;
			
			printf("Soma = %.2f \n", result);
			
			break;
		
		case 2:
			printf("Insira o valor 1: ");
			scanf("%f", &n1);
			
			printf("Insira o valor 2: ");
			scanf("%f", &n2);
			
			result = n1 - n2;
			
			printf("Subtração = %.2f \n", result);
			break;
			
		
		case 3:
			printf("Insira o valor 1: ");
			scanf("%f", &n1);
			
			printf("Insira o valor 2: ");
			scanf("%f", &n2);
			
			result = n1 * n2;
			
			printf("Multiplicacao = %.2f \n", result);
			
			break;
		
		case 4:
			printf("Insira o valor 1: ");
			scanf("%f", &n1);
			
			printf("Insira o valor 2: ");
			scanf("%f", &n2);
			
			if(n2 == 0){
				printf("Valor igual a 0.");
			} else{
				result = n1 / n2;
				
				printf("Divisao = %.2f \n", result);
			}

			break;
		
		default:
			printf("Opcao invalida.");
			
			break;	
	}
	
	return 0;
}
