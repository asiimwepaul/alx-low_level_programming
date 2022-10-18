#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
