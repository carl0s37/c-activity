#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (0, "Portuguese");
	
	int i=0, numbers[4];
	
	for(i; i<4; i++){
		printf("Digite um número inteiro: ");
		scanf("%d", &numbers[i]);
	}
	printf("A multiplicação entre %d e %d é %d" , numbers[0] , numbers[2] , numbers[0] * numbers[2]);
	printf("\nA soma entre %d e %d é %d", numbers[1] , numbers[3] , numbers[1] + numbers[3]);
}
