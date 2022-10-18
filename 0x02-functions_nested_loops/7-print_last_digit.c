#include "main.h"
/**
 * print_last_digit - prints the last digit of a given value
 * @n: pasted argument
 * Return: returns the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
