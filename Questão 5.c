#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (0, "Portuguese");
	
	int i=0, numbers[4];
	
	for(i; i<4; i++){
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &numbers[i]);
	}
	printf("A multiplica��o entre %d e %d � %d" , numbers[0] , numbers[2] , numbers[0] * numbers[2]);
	printf("\nA soma entre %d e %d � %d", numbers[1] , numbers[3] , numbers[1] + numbers[3]);
}
