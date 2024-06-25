#include <stdio.h>
#include <stdlib.h>
/*
Curso CC50 Havard Funda��o Estudar: Modulo 1 - C
14/03/24 by: Gustavo S Agapio
Fundamentos de C, com condi��es
*/
int main() {
    char resp;
    int num1, num2;
    
    printf("Do you agree? (y/n) ");
    scanf(" %c", &resp); // L� o caractere de resposta do usu�rio

    // Converte o caractere para min�sculo para evitar diferencia��o entre mai�sculas e min�sculas
    resp = tolower(resp);
    
    if (resp == 'y') {
        printf("Agreed.\n");
        
        printf("Digite o primeiro numero: ");
        scanf("%d", &num1);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);

        // Verifica a rela��o entre os n�meros
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
