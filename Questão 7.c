#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(0, "Portuguese");
	
	int number1 = 0 , number2 = 0 , result = 0;
	char continue_loop;
	
	do{
		printf("Digite um número inteiro: ");
		scanf("%d" , &number1);
		getchar();
	
		printf("\nDigite outro número inteiro:");
		scanf("%d" , &number2);
		getchar();
	
		result = number1 + number2;
	
		printf("\nO resultado é %d" , result);
	
		printf("\nVocê deseja fazer outro calculo(S/N)?");
	
		continue_loop = getchar();
	}
	while(continue_loop == 's' || continue_loop == 'S');
	
	printf("Fim dos cálculos");
}
