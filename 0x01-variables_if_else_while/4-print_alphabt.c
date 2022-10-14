#include <stdio.h>
/**
 * main - print alphabet except q and e
 * Return: return 0 if successfull
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'q') && (letter != 'a'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
