#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *arg[]) {
	
	setlocale(LC_ALL, "Portuguese");	
	int a, c, n, k, m, d, l, j, i;

	
	printf("Digite o ano para calcular a pascoa: ");
	scanf("%i", &a);
	
	c = a/100;
	n = a - (19*(a/19));
	k = (c - 17)/25;
	i = c - c/4 - ((c-k)/3) +(19*n) + 15;
	i = i - (30*(i/30));
	i = i - ((i/28)*(1-(i/28))*(29/(i+1))*((21-n)/11));
	j = a + a/4 + i + 2 -c + c/4;
	j = j - (7*(j/7));
	l = i - j;
	m = 3 + ((l+40)/44);
	d = l + 28 - (31*(m/4));

	printf("Data da Pascoa: %i / %i / %i \n", d, m, a);
	
	return 0;
}

