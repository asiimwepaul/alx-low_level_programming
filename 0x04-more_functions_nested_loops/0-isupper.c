#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: variables text
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
