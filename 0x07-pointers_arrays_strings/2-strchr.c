#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be located
 * @c: character to be located
 * Return: on finding c return a pointer to the first
 * occurance else Null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
