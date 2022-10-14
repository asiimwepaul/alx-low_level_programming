#include <stdio.h>
/**
 * main - print all numbers of base 16
 * Return: return 0 if successful
 */
int main(void)
{
	int num = '0';
	char letter = 'a';

	while (num <= '9') /*print 0 to 9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f') /*print a to f*/
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
