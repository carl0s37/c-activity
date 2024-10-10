#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(0, "Portuguese");
	
	int quantidade_de_vendas = 0, dia_com_mais_vendas = 0, qtd_dia[28], i = 0;
	
	dia_com_mais_vendas = qtd_dia[0];
	
	for (i; i < 10; i++){
		
		printf("Informe quantas vendas foram efetuadas no dia %d ", i + 1);
		scanf("%d" ,&qtd_dia[i]);
		
		if(qtd_dia[i] > dia_com_mais_vendas){
			
			quantidade_de_vendas = qtd_dia[i];
			dia_com_mais_vendas = i + 1;
		}
	}	
	printf("A maior venda ocorreu no dia %d com %d refeições vendidas.", dia_com_mais_vendas, quantidade_de_vendas);
}
