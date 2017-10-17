#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float dolar, euro, real;
	
	printf(" Coloque o valor em reais: ");
	scanf("%f", &real);
	
	dolar = real * 3.15;
	euro = real * 3.58;
	
	printf("O valor em Dolar: %0.2f e em Euro: %0.2f\n", dolar, euro);
	
	return 0;
}
