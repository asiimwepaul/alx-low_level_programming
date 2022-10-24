#include "main.h"

/**
 * _strcpy - write a functions that copies a string
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer
 * Return: return 0 if successful
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] !=  '\0');

	return (dest);
}
