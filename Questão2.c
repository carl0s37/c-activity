#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(0, "Portuguese");
	
	// Declaração de variáveis
	int answers[10];
	int i = 0, counter = 0, new_value_to_count = 0 , bigger = 0, smaller = 0;
	
	
	// Loop para armazenar respostas do cliente no array
	for (i; i < 10; i++){
		printf("Digite um número: ");
		
		scanf("%d", &answers[i]);
		
		// Checar quantas vezes o número 3 se repete 
		if(answers[i] == 3){
		
			counter++;
		}
		
		// Verificar o maior número
		if(answers[i] > bigger){
			
			bigger = answers[i];
					
		}
		
		// Verificar o menor número
		if(answers[i] < smaller){
			
			smaller = answers[i];
			
		}
	}
	
	// Exibir quantos números 3 foram adicionados
	printf("A quantidade de números 3 adicionados é de: %d " , counter);
	
	// Zerar o contador e o índice para criar um novo loop e contador
	i = counter = 0;
	
	// Entrada do novo número para contar novamente
	printf("\nInforme um novo número para saber quantos foram adiconados: ");
	scanf("%d", &new_value_to_count);
	
	bigger = smaller = answers[0];
	
	// Novo loop para contar quantos vezes tem o novo número digitado pelo usuário
	for (i; i < 10; i++){
	
		if (answers[i] == new_value_to_count){
		
			counter++;
	
		}
	}
	
	// Saída para informar a quantidade do novo número informado
	printf("A quantidade de %d adicionados é de %d", new_value_to_count , counter); 
	
	// Saída pora exibir o maior número
	printf("\nO maior número é: %d" , bigger);
	
	// Saída para exibir o menor número
	printf("\nO menor número é %d: ", smaller);
}
