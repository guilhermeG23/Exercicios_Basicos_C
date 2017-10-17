#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, t;

	printf("Entre com o valor que voce quer: ");
	scanf("%d", &x);
	
	t = 1;
	
	while(x >= 1){
		t = t * x;
		x--;
	}
	printf("Resultado final: %d", t);

	return 0;
}
