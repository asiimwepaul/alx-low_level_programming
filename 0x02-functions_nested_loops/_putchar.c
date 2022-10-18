#include <unsitd.h>
/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 *
 * Return: 1 on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
