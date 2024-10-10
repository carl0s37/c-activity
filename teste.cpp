#include <stdio.h>
#include <locale.h>

int main(){
	
	int vote, counter = 0, vote_A = 0, vote_B = 0, vote_D = 0, null_vote = 0, blank_vote = 0;

	printf("Digite 1 para votar no candidato A: \n");
	printf("Digite 2 para votar no candidato B: \n");
	printf("Digite 3 para votar no candidato D: \n");
	printf("Digite 4 para votar em branco: \n");
	printf("Digite qualquer número para anular o voto: \n");
	printf("Digite 0 para encerrar as votações: \n");
	scanf("%d" , &vote);		
		
	while(vote != 0){
		
		switch(vote){
			case 1:
				vote_A++;
				break;
			case 2:
				vote_B++;
				break;
			case 3:
				vote_D++;
				break;
			case 4:
				blank_vote++;
				break;
			default:
				null_vote++;
				break;							
		}
		printf("Digite seu voto:");
		scanf("%d", &vote);
	}
}
