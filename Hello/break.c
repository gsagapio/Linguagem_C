#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int inicial;
	
	for(i = 1; i <= 10; i++){
		printf("%d \n", i);
		
		if (i == 5){
			break;
		}
	}
	
	for (inicial = 1; inicial <= 10; inicial++){
		
		if (inicial == 5){
			continue;
		}
		
		printf("%d ", inicial);	
	
	}
	
	return 0;
}
