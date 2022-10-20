#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: 0 always
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
