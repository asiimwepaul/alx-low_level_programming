#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: 0 if successful
 */

void rev_string(char *s)
{
	int l, i;
	char ch;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (i = 0; i < 1 / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}
