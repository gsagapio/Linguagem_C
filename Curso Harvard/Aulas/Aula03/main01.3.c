#include <stdio.h>
#include <stdlib.h>
/*
Curso CC50 Havard Fundação Estudar: Modulo 1 - C
14/03/24 by: Gustavo S Agapio
Fundamentos de C, com condições
*/
int main() {
    char resp;
    int num1, num2;
    
    printf("Do you agree? (y/n) ");
    scanf(" %c", &resp); // Lê o caractere de resposta do usuário

    // Converte o caractere para minúsculo para evitar diferenciação entre maiúsculas e minúsculas
    resp = tolower(resp);
    
    if (resp == 'y') {
        printf("Agreed.\n");
        
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        // Verifica a relação entre os números
        if (num1 < num2)
            printf("O numero 1 e menor que o numero 2.\n");
        else if (num1 > num2)
            printf("O numero 1 e maior que o numero 2.\n");
        else
            printf("Os numeros sao iguais.\n");
    } else if (resp == 'n') {
        printf("Not agreed.\n");
    } else {
        printf("Wrong Word.\n");
    }
    
    return 0;
}
