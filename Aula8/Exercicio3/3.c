#include <stdio.h>
#include <stdlib.h>

int main() {

	int	x = 0;
	int y = 0;

	while(x < 5000000){
		x = x + 2;
		y++;
	}
	printf("%d\n", y);

	return 0;
}
