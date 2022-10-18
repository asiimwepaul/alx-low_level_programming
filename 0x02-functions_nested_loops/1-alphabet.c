#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * Return: returns 0 if successful
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while(alphabet <= 'z')
	{
		_putchar(alpahabet);
		alphabet++;
	}
	_putchar('\n');
}
