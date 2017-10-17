#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, i, valor, final, repet;
	
	printf("Entre com o valor: ");
	scanf("%d", &x);
	
	repet = x;
	
	for(i = 1; i <= x; x = x - 1) {
		
		printf("Entre com o valor de numeros: ");
		scanf("%d", &valor);
		
		if (valor > 0) {
			final = final + valor;
		}
	}
	printf("\n\nO numero de repetições foi %d, e o soma total foi: %d", repet, final);
	return (0);
}
