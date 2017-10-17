#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
		//Setando o idioma no local
        setlocale(LC_ALL, "Portuguese");

		int idade, contri, aat, at;
		char sexo; 
		char prof;
		
		//Entrada do code
		printf("Digite seu sexo (M / F): ");
        scanf(" %c", &sexo);
		printf("Voce é professor(a) (S/ N): ");
		scanf(" %c", &prof);
		printf("Tempo de Contribuição: ");
		scanf("%d", &contri);
		printf("Ano do seu nascimento: ");
		scanf("%d", &idade);
		printf("Ano atual: ");
		scanf("%d", &aat);
		
		//operacao para a comparacao
		at = (aat - idade) + contri;
		
		printf("Tempo de contribuição: %d de contribuição bruta\n", at);	
		
		//Inicio do masculino
		if(sexo=='m' || sexo=='M') {
			if (prof=='s' || prof=='S') {
				if (at>=85) {
					printf("Voce tem mais de 85 anos de contribuição professor, pode aposentar\n");
				} else if (at<85){
					printf("Voce tem menos de 85 anos de contribuição professor, ainda falta pra aposentar\n");
				} else {
					printf("Deu Erro!\n");
				}
			} else {
				if (at>=95) {
					printf("Voce tem mais de 95 anos de trabalho, pode se aposentar\n");
				} else if (at<95){
					printf("Voce tem menos de 95 anos de trabalho, espere para aposentar\n");
				} else {
					printf("Deu Erro!\n"); }
			}
		} else {
			if (prof=='s' || prof=='S') {
				if (at>=75) {
					printf("Voce tem mais de 75 anos de contribuição professora, pode aposentar\n");
				} else if (at<75){
					printf("Voce tem menos de 75 anos de contribuição professora, ainda falta pra aposentar\n");
				} else {
					printf("Deu Erro!\n");
				}
			} else {
				if (at>=85) {
					printf("Voce tem mais de 85 anos de trabalhadora, pode se aposentar\n");
				} else if (at<85){
					printf("Voce tem menos de 85 anos de trabalhadora, espere para aposentar\n");
				} else {
					printf("Deu Erro!\n");
				}
		}
	}

        return(0);
}

