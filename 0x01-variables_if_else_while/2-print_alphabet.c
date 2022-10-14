#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabets
 * Return: return 0 if successfull
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
