#include "main.h"

/**
 * string_toupper - changes a lowercase string into uppercase
 * @str: string to be changed
 * Return: a pointer to a changed string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
