#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	printf("Venus esta a %u milhões de milhas do sol", 67);
	return 0;
}
