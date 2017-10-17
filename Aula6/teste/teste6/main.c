#include <stdio.h>
 
int main() {
	
	int x, n;
	
	printf("Entre com o valor: ");
	scanf("%d", &n);
 
	for(x = 1; n > 1; n = n - 1) {
		printf("%d\n", x);
		x = x * n;
	}

	printf("\nFatorial calculado: %d", x);
	return 0;
}
