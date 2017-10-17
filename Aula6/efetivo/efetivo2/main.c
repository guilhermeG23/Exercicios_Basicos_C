#include <stdio.h>
 
int main() {
	
	int x, n, r, t, b, menos, result;
	
	printf("Entre com o valor de N: ");
	scanf("%d", &n);
	printf("Entre com o valor de R: ");
	scanf("%d", &r);
 
	for(x = 1; n > 1; n = n - 1) {
		x = x * n;
	}
	for(t = 1; r > 1; r = r - 1) {
		t = t * r;
	}
	printf("\nFatorial calculado de N: %d", x);
	printf("\nFatorial calculado de R: %d", t);
	
	menos = x - t;
	for(b = 1; menos > 1; menos = menos - 1) {
		b = b * menos;
	}
	
	result = (x / t) * b;
	printf("\n\nResultado do fatorial de N objetos diferentes: %d", b);


	return 0;
}

