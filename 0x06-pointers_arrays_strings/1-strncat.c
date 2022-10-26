#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: string to be appeaded to dest
 * @dest: string to be appeaded upon
 * @n: number of bytes from src to be appended to dest
 * Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
