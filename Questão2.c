#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(0, "Portuguese");
	
	// Declara��o de vari�veis
	int answers[10];
	int i = 0, counter = 0, new_value_to_count = 0 , bigger = 0, smaller = 0;
	
	
	// Loop para armazenar respostas do cliente no array
	for (i; i < 10; i++){
		printf("Digite um n�mero: ");
		
		scanf("%d", &answers[i]);
		
		// Checar quantas vezes o n�mero 3 se repete 
		if(answers[i] == 3){
		
			counter++;
		}
		
		// Verificar o maior n�mero
		if(answers[i] > bigger){
			
			bigger = answers[i];
					
		}
		
		// Verificar o menor n�mero
		if(answers[i] < smaller){
			
			smaller = answers[i];
			
		}
	}
	
	// Exibir quantos n�meros 3 foram adicionados
	printf("A quantidade de n�meros 3 adicionados � de: %d " , counter);
	
	// Zerar o contador e o �ndice para criar um novo loop e contador
	i = counter = 0;
	
	// Entrada do novo n�mero para contar novamente
	printf("\nInforme um novo n�mero para saber quantos foram adiconados: ");
	scanf("%d", &new_value_to_count);
	
	bigger = smaller = answers[0];
	
	// Novo loop para contar quantos vezes tem o novo n�mero digitado pelo usu�rio
	for (i; i < 10; i++){
	
		if (answers[i] == new_value_to_count){
		
			counter++;
	
		}
	}
	
	// Sa�da para informar a quantidade do novo n�mero informado
	printf("A quantidade de %d adicionados � de %d", new_value_to_count , counter); 
	
	// Sa�da pora exibir o maior n�mero
	printf("\nO maior n�mero �: %d" , bigger);
	
	// Sa�da para exibir o menor n�mero
	printf("\nO menor n�mero � %d: ", smaller);
}
