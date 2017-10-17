#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x, n, j;
	
	n = 0;
	
	for(x = 0; n <= 500; n = n + 2) {
		printf("%d, ", x);
		x = x + 2;
		j = j + x;
	}
	printf("\n\n%d", j);
	return(0);
}
