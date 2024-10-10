#include <stdio.h>

int main()
{
	char matriz_quadrado[5][5]; // determina o tamanho da matriz inicial
	int linha = 0, coluna = 0 , novo_lado = 0; // declaração de variáveis
	
	// loop para aramazenar X como valores da matriz
	for (linha=0; linha < 5; linha++){
		for (coluna = 0; coluna < 5; coluna++){
			matriz_quadrado[linha][coluna] = 'x';
		}
	}
	
	// loop para exibir a matriz 5x5 em forma de quadrado
	for (linha = 0; linha < 5; linha++){
		for (coluna = 0; coluna < 5; coluna++){
			printf("%c ", matriz_quadrado[linha][coluna]);
		}
		printf("\n"); // Quebra de linha a cada linha 
	}
	
	// Entrada de dados para determinar o novo quadrado
	printf("Digite um valor para o tamanho do lado do quadrado: ");
	scanf("%d" , &novo_lado);
	
	// loop para determinar o novo quadrado a partir da entrada do usuário
	for (linha=0; linha < novo_lado; linha++){
		for (coluna = 0; coluna < novo_lado; coluna++){
			matriz_quadrado[linha][coluna] = 'x';
		}
	}
	
	// loop de saída de matriz nxn 
	for (linha = 0; linha < novo_lado; linha++){
		for (coluna = 0; coluna < novo_lado; coluna++){
			printf("%c ", matriz_quadrado[linha][coluna]);
		}
		printf("\n"); // Quebra de linha a cada linha

	}




}
