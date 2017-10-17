#include <stdio.h>
#include <stdlib.h>

int main() {

	int x, y, p;
	
	y = 1;
	p = 0;

	printf("Coloque o valor a multiplicar: ");
	scanf("%d", &x);

	while(y <= 10){
		
		p = x * y;
		
		printf("%d x %d = %d\n", x, y, p);
		y++;
	}

	return 0;
}
