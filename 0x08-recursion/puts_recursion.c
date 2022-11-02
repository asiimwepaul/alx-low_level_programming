#include "main.h"

/**
 * _puts_recursion - prints a string and a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
i		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
