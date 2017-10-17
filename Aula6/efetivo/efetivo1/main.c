#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int boi, peso, x, c, d;
	
	printf("Entre com o numero de bois: ");
	scanf("%d", &boi);
	printf("\n");
	
	c = 0;
	d = 0;
	
	for (x = 1; x <= boi; x++) {
		
		printf("Entre com o peso do boi: ");
		scanf("%d", &peso);
		printf("\n");
	
		if(peso >= 150) {
			printf("Boi %d tem mais de 150KG, Para o Abate\n\n", x);
			c++;	
		} else {
			printf("Boi %d tem menos de 150KG, para a engorda\n\n", x);
			d++;
		}	
	}
	printf("Numero de bois abatidos: %d \n", c);
	printf("Numero de bois para engorda: %d", d);
	return 0;
}
