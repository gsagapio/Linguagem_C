#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, result;
	
	for(i = 1; i <= 10; i++){
	
		for(num = 1; num <= 10; num++){
			result = i * num;
			printf("%d X %d = %d \n", i, num, result);
		}
		printf("\n");
	}
	
	return 0;
}
