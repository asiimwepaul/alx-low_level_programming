#include "main.h"
/*
 * _abs - returns the absolute value of a number given to it
 * @n: parameter
 * Return: return 0 if successful or 1 if otherwise
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
