#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
