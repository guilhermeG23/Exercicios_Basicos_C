#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, i, final, l, repet;

	printf("Entre com o valor da repeticao: ");
	scanf("%d", &x);
	
	printf("Entre com o valor do Fibonacci: ");
	scanf("%d", &i);
	repet = x - (x -1);
	final = x;
	
	for(l = 1; l <= x; x = x - 1 ) {
		final = final + (final - 1);
		printf("Numero de Repetições: %d, Valor de fibo: %d \n", repet, final);
		repet = repet + 1;
	}
}
