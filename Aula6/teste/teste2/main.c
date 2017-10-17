#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor, i, result;
	
	printf("Entre com o Valor: ");
	scanf("%d", &valor);
	
	for (i=1; i<11; i++){
		result = valor * i;
		printf("%d x %d = %d \n", i, valor, result);
	}	
	return 0;
}
