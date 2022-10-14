#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returns alphabet in both lower and upper case
 * Return: return 0 if successfull
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
