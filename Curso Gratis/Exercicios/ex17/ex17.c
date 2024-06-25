#include <stdio.h>

// Defini��o da estrutura
struct Pessoa {
    char nome[50];
    int idade;
    float peso;
    float altura;
};

int main() {
    // Declara��o de uma vari�vel do tipo Pessoa
    struct Pessoa pessoa_n;
	
	//La�o de repeti��o
	int i = 1;
	while (i <= 3){
		//Inser��o de dados da pessoa i
		 	printf("\nDados da Pessoa %d: \n", i);
		    printf("Informe o nome: \n");
		    scanf("%s", pessoa_n.nome);
		    
		    printf("Informe a idade: \n");
		    scanf("%d", &pessoa_n.idade);
		    
		    printf("Informe a altura: \n");
		    scanf("%f", &pessoa_n.altura);
		    
		    printf("Informe o peso: \n");
		    scanf("%f", &pessoa_n.peso);
		
		//impress�o das informa��es com condi��es
		if (i == 1){
			printf("\nDados da Pessoa 1:\n");
    		printf("Nome: %s\n", pessoa_n.nome);
    		printf("Idade: %d\n", pessoa_n.idade);
		}
		else if(i == 2){
			printf("\nDados nao serao impressos da pessoa 2.\n");
		}
		else if(i == 3){
			printf("\nDados da Pessoa 3:\n");
    		printf("Peso: %.2f\n", pessoa_n.peso);
    		printf("Altura: %.2f\n", pessoa_n.altura);
		}
		i++;
	}
    return 0;
}
