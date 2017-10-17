#include <stdio.h>
#include <stdlib.h>

int main() {

	int	x = 0;

	while(x < 500000){
		printf("%d\n", x);
		x = x + 2;
	}
	
	return 0;
}