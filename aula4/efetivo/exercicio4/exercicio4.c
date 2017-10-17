#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

        setlocale(LC_ALL, "Portuguese");
        int a, b, c, ab, bc, ac;

        printf("Digite a hipotenusa: ");
        scanf("%i", &a);
        printf("Digite o cateto adjacente: ");
        scanf("%i", &b);
        printf("Digite o cateto oposto: ");
        scanf("%i", &c);

        ab = (a + b);
        bc = (b + c);
        ac = (a + c);

        if((ab == ac) && (bc == ac)) {
        	printf("Triangulo Equilatero, valores de AB: %i, BC: %i e AC: %i \n", ab, bc, ac);
        } else if ((ab == ac) && (bc != ac) && (ab != bc)) {
        	printf("Triangulo Isosceles, valores de AB: %i, BC: %i e AC: %i \n", ab, bc, ac);
		} else if ((ab != bc) && (ac != bc ) && (ab != ac)) {
		printf("Triangulo Escaleno, valores de AB: %i, BC: %i e AC: %i \n", ab, bc, ac);
	} else {
		printf("Deu merda\n");
	}
}
