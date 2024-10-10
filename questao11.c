#include <stdio.h>
#include <locale.h>

void print_name_cresc(char name[], int size);
void print_name_decresc(char name[], int size);
void print_string_upper(char user_string[], int size);
void print_string_lower(char user_string[], int size);
void print_string_words(char user_string[], int size);
void print_string_words_reversed(char user_string[], int size, int words_count, int word_medium_size);


int main()
{	
	setlocale(0 , "Portuguese");
	char name[64] = "";
	int name_size = sizeof(name);
	int words_count = 3;
	
	printf("Digite seu nome: ");
  	fgets(name, name_size, stdin);
  	
	printf("Digite a quantidade de palavras: 3");

	printf("O nome é: %s" , name);
	printf("Seu nome em ordem crescente:\n");
	print_name_cresc(name, name_size);
	printf("\nSeu nome em ordem decrescente:");
	print_name_decresc(name, name_size);
	printf("\nChars da string:\t");
	print_string_upper(name, name_size);
	print_string_lower(name, name_size);
	print_string_words(name, name_size);
	print_string_words_reversed(name, name_size, words_count, 16);
	return 0;
}

void print_name_cresc(char name[], int size)
{
	int i =0;
	while (i < size) {
		printf("%c", name[i]);
		i++;
	}
}

void print_name_decresc(char name[], int size)
{
	int i = size;
	while (i > 0) {
		i--;
		printf("%c", name[i]);
	}
}

void print_string_upper(char user_string[], int size)
{
	int i = 0;
	while (i < size) {
		printf("%c", toupper(user_string[i]));
		i++;
	}
}

void print_string_lower(char user_string[], int size)
{
	int i = 0;
	while (i < size) {
		printf("%c", tolower(user_string[i]));
		i++;
	}
}

void print_string_words(char user_string[], int size)
{
	int i = 0;
	while (i < size) {
		if (user_string[i] == ' ') {
			printf("\n");
		} else {
			printf("%c", user_string[i]);
		}
		i++;
	}
}

void print_string_words_reversed(char user_string[], int size, int words_count, int word_medium_size)
{
	char words[words_count][word_medium_size];
	char current_word[word_medium_size];
	int i = 0;
	int word_index = 0;
	int word_list_index = 0;
	while (i < size) {
		if (user_string[i] != ' ') {
			printf("achou um espaco na palvra");
			current_word[word_index] = user_string[i];
			word_index++;
		} else {
			int m = 0;
			while (m < sizeof(current_word)) {
				printf("incrementou um char na palavra atual: %c", current_word[m]);
				words[word_list_index][m] = current_word[m];
				m++;
			}
			word_list_index++;
			word_index = 0;
			printf("palavra adicionada no array de palavras");
			free (current_word);
		}
		i++;
	}
	int j = words_count;
	printf("\nComecando print de palavras de forma reversa");
	while (j > 0) {
		int k = 0;
		while (k < sizeof(words[j])) {
			printf("\nPrimeira palavra:\t");
			printf("%c", words[j][k]);
			k++;
		}
		j--;
	}
}
