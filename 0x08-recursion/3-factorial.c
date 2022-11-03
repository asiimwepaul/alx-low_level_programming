#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the number whose factorial is to be found
 * Return: if n > 0 - factorial of n else 1- error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n > 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
