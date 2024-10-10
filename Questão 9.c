#include <stdio.h>
#include <locale.h>

int main(){

setlocale (0, "Portuguese");

	int row = 0, column = 0, bigger = 0 , smaller = 0;
	int matriz[3][4];
	

	//get values for matriz
	for (row = 0; row <3; row++){
		for (column = 0; column < 4; column++){
			printf("Digite um número inteiro");
			scanf("%d" , &matriz[row][column]);
			
			if(matriz[column][row] > bigger){
				bigger = matriz[column][row];
			}
		}
	}
	smaller = matriz[0][0];
	
	for (row = 0; row < 3; row++){
		for (column = 0; column < 4; column++)
		{
			
				if(matriz[column][row] < smaller)
				{
				smaller = matriz[column][row];
				
				}
		}
	}
	printf("O maior número é %d" , bigger);
	printf("\nO menor número é %d" , smaller);
	

}
