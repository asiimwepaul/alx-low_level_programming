#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 * Return: return 0 if successful
 */
void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++;)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
}
