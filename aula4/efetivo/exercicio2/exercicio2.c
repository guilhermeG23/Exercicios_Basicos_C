#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

        setlocale(LC_ALL, "Portuguese");
        float minsal, salario;

        printf("Digite seu Salário: ");
        scanf("%f", &salario);

        minsal = salario / 950.00;

        if(minsal >= 15.0) {
                printf("Recebe mais de 15 salarios minimos, ele recebe: %0.2f salarios\n", minsal);
        } else if (minsal>=5.0 && minsal<=15.0) {
                printf("Recebe entre 5 a 15 salarios minimos, ele recebe: %0.2f salarios\n", minsal);
        } else if (minsal>=3.0 && minsal<=5.0) {
                printf("Recebe entre 3 a 5 salarios minimos, ele recebe: %0.2f salarios\n", minsal);
        } else if (minsal>=1.0 && minsal<=3.0) {
                printf("Recebe entre 1 a 3 salarios minimos, ele recebe: %0.2f salarios\n", minsal);
        } else {
                printf("Recebe menos que um salario minimo, com o minsal de: %0.2f salario\n", minsal);
        }
        return 0;
}
