#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

        setlocale(LC_ALL, "Portuguese");
        float peso, altura;
        int i, imc;
        char nome[20];
		
		for(i = 1; i < 4; i++) {
			printf ("Entre com o seu nome: "); 
			scanf ("%s", &nome);
	        
	        printf("Digite sua altura: ");
	        scanf("%f", &altura);
			
			imc = 24.00;
	        peso = imc * (altura * altura);
	        
			printf("%s, você pesa: %0.2f KG para ter um IMC 24\n\n", nome, peso);
		}
        
		return 0;
}

