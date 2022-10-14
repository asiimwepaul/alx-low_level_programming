#include <stdio.h>
#include <stdlib.h>
/**
 * main - return reverse alphabet
 * Return: return 0 if successful
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
