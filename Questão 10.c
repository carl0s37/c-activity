#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Portuguese");
	
	
	// Declara��o de vari�veis
	float preco_produto = 0, media_mensal_vendas = 0, novo_preco = 0;
	
	// Entrada de Dados
	
	printf("Informe o pre�o atual do produto: ");
	scanf("%f" , &preco_produto); 
	printf("Informe a quantidade media vendida mensalmente: ");
	scanf("%f" , &media_mensal_vendas);
	
	// Teste para ver qual altera��o vai ser aplicada no produto
	
	if(media_mensal_vendas < 500 || preco_produto < 30){
		novo_preco = preco_produto * 1.1;
	}
	
	else if(media_mensal_vendas < 1200 || preco_produto < 80){
		novo_preco = preco_produto * 1.15;
	}
	else if(media_mensal_vendas >= 1200 || preco_produto >= 80){
		novo_preco = preco_produto * 0.8;
	}
	
	// Sa�da informando o novo pre�o
	printf("O novo pre�o � %f" , novo_preco);











	
}
