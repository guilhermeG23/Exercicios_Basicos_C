#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]) {
		//Setando o idioma no local
        setlocale(LC_ALL, "Portuguese");
        
    	//Setando a variaveis
		/*
		idade = sua idade
		contri = tempo de contribuicao
		att = ano atual
		at = resuldato do ((ano atual - idade) + tempo de contribi)
		*/
		int idade, contri, aat, at;
		char sexo; 
		char prof;
		
		//Entrada do code
		printf("Qual seu sexo?(\"M\" | \"F\")");
		sexo = getchar();
		printf("Voce e professor ou professora?(\"S\" | \"N\")");
		scanf("%s",&prof);
		printf("Tempo de Contribuição em trabalho registrado? ");
		scanf("%d", &contri);
		printf("Ano do seu nascimento: ");
		scanf("%d", &idade);
		printf("Ano atual: ");
		scanf("%d", &aat);
		
		//operacao para a comparacao
		at = (aat - idade) + contri;	
		
		//Frase geral na impressao
		printf("Seu tempo de contribuição: %d\n\n", at);
		
		//Inicio do masculino
		if((sexo=='m'|| sexo=='M') && (prof=='s' || prof=='S') && (at>=85)) {
			//professor com mais de 85
			printf("Você é professor e seu tempo de contribuiçao corresponde a %d.\nVoce garantiu o seu direito de aposentadoria.\n", at);
		} else if((sexo=='m'|| sexo=='M')&& (prof=='s' || prof=='S') && (at<=84)) {
			//professor com menos de 84
			printf("Professor a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a suacontribuicao deve ser maior que 84.\n", at);
		} else if((sexo=='m'|| sexo=='M') && (prof=='n' || prof=='N') && (at>=95)) {
			//trabalhador comum com mais de 95
			printf("Parabens senhor a soma da sua idade com o valor de contrinuiçao corresponde a %d. Voce garantiu o seu direito de aposentadoria", at);
		} else if((sexo=='m'|| sexo=='M') && (prof=='n' || prof=='N') && (at<=94)) {
			//trabalhador comum com menos de 94
			printf("Senhor a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 94.\n", at);
		}
		
		//inicio do feminino		
		 else if((sexo=='f'|| sexo=='F') && (prof=='s' || prof=='S') && (at>=75)) {
			//professora com mais de 75
			printf("Você é professora e seu tempo de contribuiçao corresponde a %d.\nVoce garantiu o seu direito de aposentadoria.\n", at);
		} else if((sexo=='f'|| sexo=='F')&& (prof=='s' || prof=='S') && (at<=74)) {
			//professora com menos de 74
			printf("Professora a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 74.\n", at);
		} else if((sexo=='f'|| sexo=='F') && (prof=='n' || prof=='N') && (at>=85)) {
			//trabalhadora comum com mais de 85
			printf("Parabens senhora a soma da sua idade com o valor de contrinuiçao corresponde a %d. Voce garantiu o seu direito de aposentadoria", at);
		} else if((sexo=='f'|| sexo=='F') && (prof=='n' || prof=='N') && (at<=84)) {
			//trabalhadora comum com menos de 84
			printf("Senhora a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 84.\n", at);
		} else {
			//quando tudo deu errado
			printf("Deu erro!\n");
		}
        return(0);
}

